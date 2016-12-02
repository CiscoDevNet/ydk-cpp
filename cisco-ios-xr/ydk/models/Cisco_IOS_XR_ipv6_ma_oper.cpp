
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_ma_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ma_oper {

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::LinkLocalAddress()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "link-local-address"; yang_parent_name = "brief";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::Address()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "address"; yang_parent_name = "brief";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Brief()
    :
    	interface_name{YType::str, "interface-name"},
	 line_state{YType::enumeration, "line-state"}
    	,
    link_local_address(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress>())
{
    link_local_address->parent = this;
    children["link-local-address"] = link_local_address.get();

    yang_name = "brief"; yang_parent_name = "briefs";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::~Brief()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| line_state.is_set
	|| (link_local_address !=  nullptr && link_local_address->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(line_state.operation)
	|| (link_local_address !=  nullptr && is_set(link_local_address->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
        else
        {
            link_local_address = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::LinkLocalAddress>();
            link_local_address->parent = this;
            children["link-local-address"] = link_local_address.get();
        }
        return children.at("link-local-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("link-local-address") == children.end())
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Briefs()
{
    yang_name = "briefs"; yang_parent_name = "vrf";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::~Briefs()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_data() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_operation() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "briefs";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        for(auto const & c : brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief>();
        c->parent = this;
        brief.push_back(std::move(c));
        children[segment_path] = brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_children()
{
    for (auto const & c : brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::LinkLocalAddress()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "link-local-address"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::AccessControlList()
    :
    	common_in_bound{YType::str, "common-in-bound"},
	 common_out_bound{YType::str, "common-out-bound"},
	 in_bound{YType::str, "in-bound"},
	 out_bound{YType::str, "out-bound"}
{
    yang_name = "access-control-list"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::~AccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::has_data() const
{
    return common_in_bound.is_set
	|| common_out_bound.is_set
	|| in_bound.is_set
	|| out_bound.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::has_operation() const
{
    return is_set(operation)
	|| is_set(common_in_bound.operation)
	|| is_set(common_out_bound.operation)
	|| is_set(in_bound.operation)
	|| is_set(out_bound.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-control-list";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_entity_path(Entity* ancestor) const
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

    if (common_in_bound.is_set || is_set(common_in_bound.operation)) leaf_name_data.push_back(common_in_bound.get_name_leafdata());
    if (common_out_bound.is_set || is_set(common_out_bound.operation)) leaf_name_data.push_back(common_out_bound.get_name_leafdata());
    if (in_bound.is_set || is_set(in_bound.operation)) leaf_name_data.push_back(in_bound.get_name_leafdata());
    if (out_bound.is_set || is_set(out_bound.operation)) leaf_name_data.push_back(out_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
    }
    if(value_path == "in-bound")
    {
        in_bound = value;
    }
    if(value_path == "out-bound")
    {
        out_bound = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::MultiAccessControlList()
    :
    	common{YType::str, "common"},
	 inbound{YType::str, "inbound"},
	 outbound{YType::str, "outbound"}
{
    yang_name = "multi-access-control-list"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::~MultiAccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::has_data() const
{
    for (auto const & leaf : common.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inbound.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : outbound.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::has_operation() const
{
    for (auto const & leaf : common.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : inbound.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : outbound.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-access-control-list";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_entity_path(Entity* ancestor) const
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


    auto common_name_datas = common.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), common_name_datas.begin(), common_name_datas.end());
    auto inbound_name_datas = inbound.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inbound_name_datas.begin(), inbound_name_datas.end());
    auto outbound_name_datas = outbound.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), outbound_name_datas.begin(), outbound_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common.append(value);
    }
    if(value_path == "inbound")
    {
        inbound.append(value);
    }
    if(value_path == "outbound")
    {
        outbound.append(value);
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::Rpf()
    :
    	allow_default_route{YType::boolean, "allow-default-route"},
	 allow_self_ping{YType::boolean, "allow-self-ping"},
	 enable{YType::boolean, "enable"},
	 mode{YType::uint32, "mode"}
{
    yang_name = "rpf"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::~Rpf()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::has_data() const
{
    return allow_default_route.is_set
	|| allow_self_ping.is_set
	|| enable.is_set
	|| mode.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default_route.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(enable.operation)
	|| is_set(mode.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_entity_path(Entity* ancestor) const
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

    if (allow_default_route.is_set || is_set(allow_default_route.operation)) leaf_name_data.push_back(allow_default_route.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.operation)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-default-route")
    {
        allow_default_route = value;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::Input()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::uint32, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "input"; yang_parent_name = "bgp-pa";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::~Input()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_entity_path(Entity* ancestor) const
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

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::Output()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::uint32, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "output"; yang_parent_name = "bgp-pa";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::~Output()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_entity_path(Entity* ancestor) const
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

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::BgpPa()
    :
    input(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input>())
	,output(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output>())
{
    input->parent = this;
    children["input"] = input.get();

    output->parent = this;
    children["output"] = output.get();

    yang_name = "bgp-pa"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::~BgpPa()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && is_set(input->operation))
	|| (output !=  nullptr && is_set(output->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::Utime()
{
    yang_name = "utime"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::~Utime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::IdbUtime()
{
    yang_name = "idb-utime"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::~IdbUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::CapsUtime()
{
    yang_name = "caps-utime"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::~CapsUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::FwdEnUtime()
{
    yang_name = "fwd-en-utime"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::FwdDisUtime()
{
    yang_name = "fwd-dis-utime"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::MulticastGroup()
    :
    	address{YType::str, "address"}
{
    yang_name = "multicast-group"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::Address()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "address"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::ClientMulticastGroup()
    :
    	address{YType::str, "address"}
{
    yang_name = "client-multicast-group"; yang_parent_name = "global-detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::~ClientMulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-multicast-group";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::GlobalDetail()
    :
    	interface_name{YType::str, "interface-name"},
	 flow_tag_dst{YType::boolean, "flow-tag-dst"},
	 flow_tag_src{YType::boolean, "flow-tag-src"},
	 is_icmp_unreach_enabled{YType::boolean, "is-icmp-unreach-enabled"},
	 line_state{YType::enumeration, "line-state"},
	 mlacp_active{YType::boolean, "mlacp-active"},
	 mtu{YType::uint32, "mtu"},
	 operation_state{YType::enumeration, "operation-state"},
	 rg_id_exists{YType::boolean, "rg-id-exists"}
    	,
    access_control_list(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList>())
	,bgp_pa(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa>())
	,caps_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime>())
	,fwd_dis_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime>())
	,fwd_en_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime>())
	,idb_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime>())
	,link_local_address(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress>())
	,multi_access_control_list(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList>())
	,rpf(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf>())
	,utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime>())
{
    access_control_list->parent = this;
    children["access-control-list"] = access_control_list.get();

    bgp_pa->parent = this;
    children["bgp-pa"] = bgp_pa.get();

    caps_utime->parent = this;
    children["caps-utime"] = caps_utime.get();

    fwd_dis_utime->parent = this;
    children["fwd-dis-utime"] = fwd_dis_utime.get();

    fwd_en_utime->parent = this;
    children["fwd-en-utime"] = fwd_en_utime.get();

    idb_utime->parent = this;
    children["idb-utime"] = idb_utime.get();

    link_local_address->parent = this;
    children["link-local-address"] = link_local_address.get();

    multi_access_control_list->parent = this;
    children["multi-access-control-list"] = multi_access_control_list.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    utime->parent = this;
    children["utime"] = utime.get();

    yang_name = "global-detail"; yang_parent_name = "global-details";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::~GlobalDetail()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flow_tag_dst.is_set
	|| flow_tag_src.is_set
	|| is_icmp_unreach_enabled.is_set
	|| line_state.is_set
	|| mlacp_active.is_set
	|| mtu.is_set
	|| operation_state.is_set
	|| rg_id_exists.is_set
	|| (access_control_list !=  nullptr && access_control_list->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (multi_access_control_list !=  nullptr && multi_access_control_list->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (utime !=  nullptr && utime->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(flow_tag_dst.operation)
	|| is_set(flow_tag_src.operation)
	|| is_set(is_icmp_unreach_enabled.operation)
	|| is_set(line_state.operation)
	|| is_set(mlacp_active.operation)
	|| is_set(mtu.operation)
	|| is_set(operation_state.operation)
	|| is_set(rg_id_exists.operation)
	|| (access_control_list !=  nullptr && is_set(access_control_list->operation))
	|| (bgp_pa !=  nullptr && is_set(bgp_pa->operation))
	|| (caps_utime !=  nullptr && is_set(caps_utime->operation))
	|| (fwd_dis_utime !=  nullptr && is_set(fwd_dis_utime->operation))
	|| (fwd_en_utime !=  nullptr && is_set(fwd_en_utime->operation))
	|| (idb_utime !=  nullptr && is_set(idb_utime->operation))
	|| (link_local_address !=  nullptr && is_set(link_local_address->operation))
	|| (multi_access_control_list !=  nullptr && is_set(multi_access_control_list->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation))
	|| (utime !=  nullptr && is_set(utime->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-detail" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.operation)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.operation)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (is_icmp_unreach_enabled.is_set || is_set(is_icmp_unreach_enabled.operation)) leaf_name_data.push_back(is_icmp_unreach_enabled.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.operation)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operation_state.is_set || is_set(operation_state.operation)) leaf_name_data.push_back(operation_state.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.operation)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-control-list")
    {
        if(access_control_list != nullptr)
        {
            children["access-control-list"] = access_control_list.get();
        }
        else
        {
            access_control_list = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::AccessControlList>();
            access_control_list->parent = this;
            children["access-control-list"] = access_control_list.get();
        }
        return children.at("access-control-list");
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa.get();
        }
        else
        {
            bgp_pa = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::BgpPa>();
            bgp_pa->parent = this;
            children["bgp-pa"] = bgp_pa.get();
        }
        return children.at("bgp-pa");
    }

    if(child_yang_name == "caps-utime")
    {
        if(caps_utime != nullptr)
        {
            children["caps-utime"] = caps_utime.get();
        }
        else
        {
            caps_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::CapsUtime>();
            caps_utime->parent = this;
            children["caps-utime"] = caps_utime.get();
        }
        return children.at("caps-utime");
    }

    if(child_yang_name == "client-multicast-group")
    {
        for(auto const & c : client_multicast_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::ClientMulticastGroup>();
        c->parent = this;
        client_multicast_group.push_back(std::move(c));
        children[segment_path] = client_multicast_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime != nullptr)
        {
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
        else
        {
            fwd_dis_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdDisUtime>();
            fwd_dis_utime->parent = this;
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
        return children.at("fwd-dis-utime");
    }

    if(child_yang_name == "fwd-en-utime")
    {
        if(fwd_en_utime != nullptr)
        {
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
        else
        {
            fwd_en_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::FwdEnUtime>();
            fwd_en_utime->parent = this;
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
        return children.at("fwd-en-utime");
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
        else
        {
            idb_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::IdbUtime>();
            idb_utime->parent = this;
            children["idb-utime"] = idb_utime.get();
        }
        return children.at("idb-utime");
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
        else
        {
            link_local_address = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::LinkLocalAddress>();
            link_local_address->parent = this;
            children["link-local-address"] = link_local_address.get();
        }
        return children.at("link-local-address");
    }

    if(child_yang_name == "multi-access-control-list")
    {
        if(multi_access_control_list != nullptr)
        {
            children["multi-access-control-list"] = multi_access_control_list.get();
        }
        else
        {
            multi_access_control_list = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MultiAccessControlList>();
            multi_access_control_list->parent = this;
            children["multi-access-control-list"] = multi_access_control_list.get();
        }
        return children.at("multi-access-control-list");
    }

    if(child_yang_name == "multicast-group")
    {
        for(auto const & c : multicast_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(std::move(c));
        children[segment_path] = multicast_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "utime")
    {
        if(utime != nullptr)
        {
            children["utime"] = utime.get();
        }
        else
        {
            utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::Utime>();
            utime->parent = this;
            children["utime"] = utime.get();
        }
        return children.at("utime");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::get_children()
{
    if(children.find("access-control-list") == children.end())
    {
        if(access_control_list != nullptr)
        {
            children["access-control-list"] = access_control_list.get();
        }
    }

    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("bgp-pa") == children.end())
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa.get();
        }
    }

    if(children.find("caps-utime") == children.end())
    {
        if(caps_utime != nullptr)
        {
            children["caps-utime"] = caps_utime.get();
        }
    }

    for (auto const & c : client_multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("fwd-dis-utime") == children.end())
    {
        if(fwd_dis_utime != nullptr)
        {
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
    }

    if(children.find("fwd-en-utime") == children.end())
    {
        if(fwd_en_utime != nullptr)
        {
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
    }

    if(children.find("idb-utime") == children.end())
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
    }

    if(children.find("link-local-address") == children.end())
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
    }

    if(children.find("multi-access-control-list") == children.end())
    {
        if(multi_access_control_list != nullptr)
        {
            children["multi-access-control-list"] = multi_access_control_list.get();
        }
    }

    for (auto const & c : multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    if(children.find("utime") == children.end())
    {
        if(utime != nullptr)
        {
            children["utime"] = utime.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
    }
    if(value_path == "is-icmp-unreach-enabled")
    {
        is_icmp_unreach_enabled = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "operation-state")
    {
        operation_state = value;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetails()
{
    yang_name = "global-details"; yang_parent_name = "vrf";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::~GlobalDetails()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::has_data() const
{
    for (std::size_t index=0; index<global_detail.size(); index++)
    {
        if(global_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::has_operation() const
{
    for (std::size_t index=0; index<global_detail.size(); index++)
    {
        if(global_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-details";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-detail")
    {
        for(auto const & c : global_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::GlobalDetail>();
        c->parent = this;
        global_detail.push_back(std::move(c));
        children[segment_path] = global_detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::get_children()
{
    for (auto const & c : global_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::LinkLocalAddress()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "link-local-address"; yang_parent_name = "global-brief";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::Address()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "address"; yang_parent_name = "global-brief";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::GlobalBrief()
    :
    	interface_name{YType::str, "interface-name"},
	 line_state{YType::enumeration, "line-state"}
    	,
    link_local_address(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress>())
{
    link_local_address->parent = this;
    children["link-local-address"] = link_local_address.get();

    yang_name = "global-brief"; yang_parent_name = "global-briefs";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::~GlobalBrief()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| line_state.is_set
	|| (link_local_address !=  nullptr && link_local_address->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(line_state.operation)
	|| (link_local_address !=  nullptr && is_set(link_local_address->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-brief" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
        else
        {
            link_local_address = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::LinkLocalAddress>();
            link_local_address->parent = this;
            children["link-local-address"] = link_local_address.get();
        }
        return children.at("link-local-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("link-local-address") == children.end())
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBriefs()
{
    yang_name = "global-briefs"; yang_parent_name = "vrf";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::~GlobalBriefs()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::has_data() const
{
    for (std::size_t index=0; index<global_brief.size(); index++)
    {
        if(global_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::has_operation() const
{
    for (std::size_t index=0; index<global_brief.size(); index++)
    {
        if(global_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-briefs";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-brief")
    {
        for(auto const & c : global_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::GlobalBrief>();
        c->parent = this;
        global_brief.push_back(std::move(c));
        children[segment_path] = global_brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::get_children()
{
    for (auto const & c : global_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::LinkLocalAddress()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "link-local-address"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::AccessControlList()
    :
    	common_in_bound{YType::str, "common-in-bound"},
	 common_out_bound{YType::str, "common-out-bound"},
	 in_bound{YType::str, "in-bound"},
	 out_bound{YType::str, "out-bound"}
{
    yang_name = "access-control-list"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::~AccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::has_data() const
{
    return common_in_bound.is_set
	|| common_out_bound.is_set
	|| in_bound.is_set
	|| out_bound.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::has_operation() const
{
    return is_set(operation)
	|| is_set(common_in_bound.operation)
	|| is_set(common_out_bound.operation)
	|| is_set(in_bound.operation)
	|| is_set(out_bound.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-control-list";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_entity_path(Entity* ancestor) const
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

    if (common_in_bound.is_set || is_set(common_in_bound.operation)) leaf_name_data.push_back(common_in_bound.get_name_leafdata());
    if (common_out_bound.is_set || is_set(common_out_bound.operation)) leaf_name_data.push_back(common_out_bound.get_name_leafdata());
    if (in_bound.is_set || is_set(in_bound.operation)) leaf_name_data.push_back(in_bound.get_name_leafdata());
    if (out_bound.is_set || is_set(out_bound.operation)) leaf_name_data.push_back(out_bound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
    }
    if(value_path == "in-bound")
    {
        in_bound = value;
    }
    if(value_path == "out-bound")
    {
        out_bound = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::MultiAccessControlList()
    :
    	common{YType::str, "common"},
	 inbound{YType::str, "inbound"},
	 outbound{YType::str, "outbound"}
{
    yang_name = "multi-access-control-list"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::~MultiAccessControlList()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::has_data() const
{
    for (auto const & leaf : common.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inbound.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : outbound.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::has_operation() const
{
    for (auto const & leaf : common.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : inbound.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : outbound.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-access-control-list";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_entity_path(Entity* ancestor) const
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


    auto common_name_datas = common.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), common_name_datas.begin(), common_name_datas.end());
    auto inbound_name_datas = inbound.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inbound_name_datas.begin(), inbound_name_datas.end());
    auto outbound_name_datas = outbound.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), outbound_name_datas.begin(), outbound_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common")
    {
        common.append(value);
    }
    if(value_path == "inbound")
    {
        inbound.append(value);
    }
    if(value_path == "outbound")
    {
        outbound.append(value);
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::Rpf()
    :
    	allow_default_route{YType::boolean, "allow-default-route"},
	 allow_self_ping{YType::boolean, "allow-self-ping"},
	 enable{YType::boolean, "enable"},
	 mode{YType::uint32, "mode"}
{
    yang_name = "rpf"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::~Rpf()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_data() const
{
    return allow_default_route.is_set
	|| allow_self_ping.is_set
	|| enable.is_set
	|| mode.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default_route.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(enable.operation)
	|| is_set(mode.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_entity_path(Entity* ancestor) const
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

    if (allow_default_route.is_set || is_set(allow_default_route.operation)) leaf_name_data.push_back(allow_default_route.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.operation)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-default-route")
    {
        allow_default_route = value;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::Input()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::uint32, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "input"; yang_parent_name = "bgp-pa";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::~Input()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_entity_path(Entity* ancestor) const
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

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::Output()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::uint32, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "output"; yang_parent_name = "bgp-pa";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::~Output()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_entity_path(Entity* ancestor) const
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

    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::BgpPa()
    :
    input(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>())
	,output(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>())
{
    input->parent = this;
    children["input"] = input.get();

    output->parent = this;
    children["output"] = output.get();

    yang_name = "bgp-pa"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::~BgpPa()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && is_set(input->operation))
	|| (output !=  nullptr && is_set(output->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "input")
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
        else
        {
            input = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>();
            input->parent = this;
            children["input"] = input.get();
        }
        return children.at("input");
    }

    if(child_yang_name == "output")
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
        else
        {
            output = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_children()
{
    if(children.find("input") == children.end())
    {
        if(input != nullptr)
        {
            children["input"] = input.get();
        }
    }

    if(children.find("output") == children.end())
    {
        if(output != nullptr)
        {
            children["output"] = output.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::Utime()
{
    yang_name = "utime"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::~Utime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::IdbUtime()
{
    yang_name = "idb-utime"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::~IdbUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::CapsUtime()
{
    yang_name = "caps-utime"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::~CapsUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::FwdEnUtime()
{
    yang_name = "fwd-en-utime"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::FwdDisUtime()
{
    yang_name = "fwd-dis-utime"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::MulticastGroup()
    :
    	address{YType::str, "address"}
{
    yang_name = "multicast-group"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::Address()
    :
    	address{YType::str, "address"},
	 address_state{YType::enumeration, "address-state"},
	 is_anycast{YType::boolean, "is-anycast"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "address"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::~Address()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::has_data() const
{
    return address.is_set
	|| address_state.is_set
	|| is_anycast.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_state.operation)
	|| is_set(is_anycast.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_state.is_set || is_set(address_state.operation)) leaf_name_data.push_back(address_state.get_name_leafdata());
    if (is_anycast.is_set || is_set(is_anycast.operation)) leaf_name_data.push_back(is_anycast.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-state")
    {
        address_state = value;
    }
    if(value_path == "is-anycast")
    {
        is_anycast = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::ClientMulticastGroup()
    :
    	address{YType::str, "address"}
{
    yang_name = "client-multicast-group"; yang_parent_name = "detail";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::~ClientMulticastGroup()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::has_data() const
{
    return address.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-multicast-group";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_entity_path(Entity* ancestor) const
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

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Detail()
    :
    	interface_name{YType::str, "interface-name"},
	 flow_tag_dst{YType::boolean, "flow-tag-dst"},
	 flow_tag_src{YType::boolean, "flow-tag-src"},
	 is_icmp_unreach_enabled{YType::boolean, "is-icmp-unreach-enabled"},
	 line_state{YType::enumeration, "line-state"},
	 mlacp_active{YType::boolean, "mlacp-active"},
	 mtu{YType::uint32, "mtu"},
	 operation_state{YType::enumeration, "operation-state"},
	 rg_id_exists{YType::boolean, "rg-id-exists"}
    	,
    access_control_list(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList>())
	,bgp_pa(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>())
	,caps_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>())
	,fwd_dis_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>())
	,fwd_en_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>())
	,idb_utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>())
	,link_local_address(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress>())
	,multi_access_control_list(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList>())
	,rpf(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>())
	,utime(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime>())
{
    access_control_list->parent = this;
    children["access-control-list"] = access_control_list.get();

    bgp_pa->parent = this;
    children["bgp-pa"] = bgp_pa.get();

    caps_utime->parent = this;
    children["caps-utime"] = caps_utime.get();

    fwd_dis_utime->parent = this;
    children["fwd-dis-utime"] = fwd_dis_utime.get();

    fwd_en_utime->parent = this;
    children["fwd-en-utime"] = fwd_en_utime.get();

    idb_utime->parent = this;
    children["idb-utime"] = idb_utime.get();

    link_local_address->parent = this;
    children["link-local-address"] = link_local_address.get();

    multi_access_control_list->parent = this;
    children["multi-access-control-list"] = multi_access_control_list.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    utime->parent = this;
    children["utime"] = utime.get();

    yang_name = "detail"; yang_parent_name = "details";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::~Detail()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| flow_tag_dst.is_set
	|| flow_tag_src.is_set
	|| is_icmp_unreach_enabled.is_set
	|| line_state.is_set
	|| mlacp_active.is_set
	|| mtu.is_set
	|| operation_state.is_set
	|| rg_id_exists.is_set
	|| (access_control_list !=  nullptr && access_control_list->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (link_local_address !=  nullptr && link_local_address->has_data())
	|| (multi_access_control_list !=  nullptr && multi_access_control_list->has_data())
	|| (rpf !=  nullptr && rpf->has_data())
	|| (utime !=  nullptr && utime->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<client_multicast_group.size(); index++)
    {
        if(client_multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(flow_tag_dst.operation)
	|| is_set(flow_tag_src.operation)
	|| is_set(is_icmp_unreach_enabled.operation)
	|| is_set(line_state.operation)
	|| is_set(mlacp_active.operation)
	|| is_set(mtu.operation)
	|| is_set(operation_state.operation)
	|| is_set(rg_id_exists.operation)
	|| (access_control_list !=  nullptr && is_set(access_control_list->operation))
	|| (bgp_pa !=  nullptr && is_set(bgp_pa->operation))
	|| (caps_utime !=  nullptr && is_set(caps_utime->operation))
	|| (fwd_dis_utime !=  nullptr && is_set(fwd_dis_utime->operation))
	|| (fwd_en_utime !=  nullptr && is_set(fwd_en_utime->operation))
	|| (idb_utime !=  nullptr && is_set(idb_utime->operation))
	|| (link_local_address !=  nullptr && is_set(link_local_address->operation))
	|| (multi_access_control_list !=  nullptr && is_set(multi_access_control_list->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation))
	|| (utime !=  nullptr && is_set(utime->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.operation)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.operation)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (is_icmp_unreach_enabled.is_set || is_set(is_icmp_unreach_enabled.operation)) leaf_name_data.push_back(is_icmp_unreach_enabled.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.operation)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (operation_state.is_set || is_set(operation_state.operation)) leaf_name_data.push_back(operation_state.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.operation)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-control-list")
    {
        if(access_control_list != nullptr)
        {
            children["access-control-list"] = access_control_list.get();
        }
        else
        {
            access_control_list = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::AccessControlList>();
            access_control_list->parent = this;
            children["access-control-list"] = access_control_list.get();
        }
        return children.at("access-control-list");
    }

    if(child_yang_name == "address")
    {
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa.get();
        }
        else
        {
            bgp_pa = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>();
            bgp_pa->parent = this;
            children["bgp-pa"] = bgp_pa.get();
        }
        return children.at("bgp-pa");
    }

    if(child_yang_name == "caps-utime")
    {
        if(caps_utime != nullptr)
        {
            children["caps-utime"] = caps_utime.get();
        }
        else
        {
            caps_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>();
            caps_utime->parent = this;
            children["caps-utime"] = caps_utime.get();
        }
        return children.at("caps-utime");
    }

    if(child_yang_name == "client-multicast-group")
    {
        for(auto const & c : client_multicast_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::ClientMulticastGroup>();
        c->parent = this;
        client_multicast_group.push_back(std::move(c));
        children[segment_path] = client_multicast_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime != nullptr)
        {
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
        else
        {
            fwd_dis_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>();
            fwd_dis_utime->parent = this;
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
        return children.at("fwd-dis-utime");
    }

    if(child_yang_name == "fwd-en-utime")
    {
        if(fwd_en_utime != nullptr)
        {
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
        else
        {
            fwd_en_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>();
            fwd_en_utime->parent = this;
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
        return children.at("fwd-en-utime");
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
        else
        {
            idb_utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>();
            idb_utime->parent = this;
            children["idb-utime"] = idb_utime.get();
        }
        return children.at("idb-utime");
    }

    if(child_yang_name == "link-local-address")
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
        else
        {
            link_local_address = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::LinkLocalAddress>();
            link_local_address->parent = this;
            children["link-local-address"] = link_local_address.get();
        }
        return children.at("link-local-address");
    }

    if(child_yang_name == "multi-access-control-list")
    {
        if(multi_access_control_list != nullptr)
        {
            children["multi-access-control-list"] = multi_access_control_list.get();
        }
        else
        {
            multi_access_control_list = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAccessControlList>();
            multi_access_control_list->parent = this;
            children["multi-access-control-list"] = multi_access_control_list.get();
        }
        return children.at("multi-access-control-list");
    }

    if(child_yang_name == "multicast-group")
    {
        for(auto const & c : multicast_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(std::move(c));
        children[segment_path] = multicast_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "utime")
    {
        if(utime != nullptr)
        {
            children["utime"] = utime.get();
        }
        else
        {
            utime = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Utime>();
            utime->parent = this;
            children["utime"] = utime.get();
        }
        return children.at("utime");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_children()
{
    if(children.find("access-control-list") == children.end())
    {
        if(access_control_list != nullptr)
        {
            children["access-control-list"] = access_control_list.get();
        }
    }

    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("bgp-pa") == children.end())
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa.get();
        }
    }

    if(children.find("caps-utime") == children.end())
    {
        if(caps_utime != nullptr)
        {
            children["caps-utime"] = caps_utime.get();
        }
    }

    for (auto const & c : client_multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("fwd-dis-utime") == children.end())
    {
        if(fwd_dis_utime != nullptr)
        {
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
    }

    if(children.find("fwd-en-utime") == children.end())
    {
        if(fwd_en_utime != nullptr)
        {
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
    }

    if(children.find("idb-utime") == children.end())
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
    }

    if(children.find("link-local-address") == children.end())
    {
        if(link_local_address != nullptr)
        {
            children["link-local-address"] = link_local_address.get();
        }
    }

    if(children.find("multi-access-control-list") == children.end())
    {
        if(multi_access_control_list != nullptr)
        {
            children["multi-access-control-list"] = multi_access_control_list.get();
        }
    }

    for (auto const & c : multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    if(children.find("utime") == children.end())
    {
        if(utime != nullptr)
        {
            children["utime"] = utime.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
    }
    if(value_path == "is-icmp-unreach-enabled")
    {
        is_icmp_unreach_enabled = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "operation-state")
    {
        operation_state = value;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Details()
{
    yang_name = "details"; yang_parent_name = "vrf";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::~Details()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail")
    {
        for(auto const & c : detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail>();
        c->parent = this;
        detail.push_back(std::move(c));
        children[segment_path] = detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_children()
{
    for (auto const & c : detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    briefs(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>())
	,details(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>())
	,global_briefs(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs>())
	,global_details(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails>())
{
    briefs->parent = this;
    children["briefs"] = briefs.get();

    details->parent = this;
    children["details"] = details.get();

    global_briefs->parent = this;
    children["global-briefs"] = global_briefs.get();

    global_details->parent = this;
    children["global-details"] = global_details.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::~Vrf()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (briefs !=  nullptr && briefs->has_data())
	|| (details !=  nullptr && details->has_data())
	|| (global_briefs !=  nullptr && global_briefs->has_data())
	|| (global_details !=  nullptr && global_details->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (briefs !=  nullptr && is_set(briefs->operation))
	|| (details !=  nullptr && is_set(details->operation))
	|| (global_briefs !=  nullptr && is_set(global_briefs->operation))
	|| (global_details !=  nullptr && is_set(global_details->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
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

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "briefs")
    {
        if(briefs != nullptr)
        {
            children["briefs"] = briefs.get();
        }
        else
        {
            briefs = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>();
            briefs->parent = this;
            children["briefs"] = briefs.get();
        }
        return children.at("briefs");
    }

    if(child_yang_name == "details")
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
        else
        {
            details = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    if(child_yang_name == "global-briefs")
    {
        if(global_briefs != nullptr)
        {
            children["global-briefs"] = global_briefs.get();
        }
        else
        {
            global_briefs = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalBriefs>();
            global_briefs->parent = this;
            children["global-briefs"] = global_briefs.get();
        }
        return children.at("global-briefs");
    }

    if(child_yang_name == "global-details")
    {
        if(global_details != nullptr)
        {
            children["global-details"] = global_details.get();
        }
        else
        {
            global_details = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::GlobalDetails>();
            global_details->parent = this;
            children["global-details"] = global_details.get();
        }
        return children.at("global-details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_children()
{
    if(children.find("briefs") == children.end())
    {
        if(briefs != nullptr)
        {
            children["briefs"] = briefs.get();
        }
    }

    if(children.find("details") == children.end())
    {
        if(details != nullptr)
        {
            children["details"] = details.get();
        }
    }

    if(children.find("global-briefs") == children.end())
    {
        if(global_briefs != nullptr)
        {
            children["global-briefs"] = global_briefs.get();
        }
    }

    if(children.find("global-details") == children.end())
    {
        if(global_details != nullptr)
        {
            children["global-details"] = global_details.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "interface-data";
}

Ipv6Network::Nodes::Node::InterfaceData::Vrfs::~Vrfs()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Vrfs::get_children()
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

void Ipv6Network::Nodes::Node::InterfaceData::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::IfUpUp()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-up-up"; yang_parent_name = "summary";
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::~IfUpUp()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-up";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_entity_path(Entity* ancestor) const
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

    if (ip_assigned.is_set || is_set(ip_assigned.operation)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.operation)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.operation)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::IfUpDown()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-up-down"; yang_parent_name = "summary";
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::~IfUpDown()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-down";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_entity_path(Entity* ancestor) const
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

    if (ip_assigned.is_set || is_set(ip_assigned.operation)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.operation)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.operation)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::IfDownDown()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-down-down"; yang_parent_name = "summary";
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::~IfDownDown()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-down-down";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_entity_path(Entity* ancestor) const
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

    if (ip_assigned.is_set || is_set(ip_assigned.operation)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.operation)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.operation)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::IfShutdownDown()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-shutdown-down"; yang_parent_name = "summary";
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::~IfShutdownDown()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-shutdown-down";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_entity_path(Entity* ancestor) const
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

    if (ip_assigned.is_set || is_set(ip_assigned.operation)) leaf_name_data.push_back(ip_assigned.get_name_leafdata());
    if (ip_unassigned.is_set || is_set(ip_unassigned.operation)) leaf_name_data.push_back(ip_unassigned.get_name_leafdata());
    if (ip_unnumbered.is_set || is_set(ip_unnumbered.operation)) leaf_name_data.push_back(ip_unnumbered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_children()
{
    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-assigned")
    {
        ip_assigned = value;
    }
    if(value_path == "ip-unassigned")
    {
        ip_unassigned = value;
    }
    if(value_path == "ip-unnumbered")
    {
        ip_unnumbered = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::Summary()
    :
    	if_up_down_basecaps_up{YType::uint32, "if-up-down-basecaps-up"}
    	,
    if_down_down(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown>())
	,if_shutdown_down(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>())
	,if_up_down(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown>())
	,if_up_up(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp>())
{
    if_down_down->parent = this;
    children["if-down-down"] = if_down_down.get();

    if_shutdown_down->parent = this;
    children["if-shutdown-down"] = if_shutdown_down.get();

    if_up_down->parent = this;
    children["if-up-down"] = if_up_down.get();

    if_up_up->parent = this;
    children["if-up-up"] = if_up_up.get();

    yang_name = "summary"; yang_parent_name = "interface-data";
}

Ipv6Network::Nodes::Node::InterfaceData::Summary::~Summary()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::has_data() const
{
    return if_up_down_basecaps_up.is_set
	|| (if_down_down !=  nullptr && if_down_down->has_data())
	|| (if_shutdown_down !=  nullptr && if_shutdown_down->has_data())
	|| (if_up_down !=  nullptr && if_up_down->has_data())
	|| (if_up_up !=  nullptr && if_up_up->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(if_up_down_basecaps_up.operation)
	|| (if_down_down !=  nullptr && is_set(if_down_down->operation))
	|| (if_shutdown_down !=  nullptr && is_set(if_shutdown_down->operation))
	|| (if_up_down !=  nullptr && is_set(if_up_down->operation))
	|| (if_up_up !=  nullptr && is_set(if_up_up->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::Summary::get_entity_path(Entity* ancestor) const
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

    if (if_up_down_basecaps_up.is_set || is_set(if_up_down_basecaps_up.operation)) leaf_name_data.push_back(if_up_down_basecaps_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "if-down-down")
    {
        if(if_down_down != nullptr)
        {
            children["if-down-down"] = if_down_down.get();
        }
        else
        {
            if_down_down = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfDownDown>();
            if_down_down->parent = this;
            children["if-down-down"] = if_down_down.get();
        }
        return children.at("if-down-down");
    }

    if(child_yang_name == "if-shutdown-down")
    {
        if(if_shutdown_down != nullptr)
        {
            children["if-shutdown-down"] = if_shutdown_down.get();
        }
        else
        {
            if_shutdown_down = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>();
            if_shutdown_down->parent = this;
            children["if-shutdown-down"] = if_shutdown_down.get();
        }
        return children.at("if-shutdown-down");
    }

    if(child_yang_name == "if-up-down")
    {
        if(if_up_down != nullptr)
        {
            children["if-up-down"] = if_up_down.get();
        }
        else
        {
            if_up_down = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpDown>();
            if_up_down->parent = this;
            children["if-up-down"] = if_up_down.get();
        }
        return children.at("if-up-down");
    }

    if(child_yang_name == "if-up-up")
    {
        if(if_up_up != nullptr)
        {
            children["if-up-up"] = if_up_up.get();
        }
        else
        {
            if_up_up = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary::IfUpUp>();
            if_up_up->parent = this;
            children["if-up-up"] = if_up_up.get();
        }
        return children.at("if-up-up");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::Summary::get_children()
{
    if(children.find("if-down-down") == children.end())
    {
        if(if_down_down != nullptr)
        {
            children["if-down-down"] = if_down_down.get();
        }
    }

    if(children.find("if-shutdown-down") == children.end())
    {
        if(if_shutdown_down != nullptr)
        {
            children["if-shutdown-down"] = if_shutdown_down.get();
        }
    }

    if(children.find("if-up-down") == children.end())
    {
        if(if_up_down != nullptr)
        {
            children["if-up-down"] = if_up_down.get();
        }
    }

    if(children.find("if-up-up") == children.end())
    {
        if(if_up_up != nullptr)
        {
            children["if-up-up"] = if_up_up.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::InterfaceData::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-up-down-basecaps-up")
    {
        if_up_down_basecaps_up = value;
    }
}

Ipv6Network::Nodes::Node::InterfaceData::InterfaceData()
    :
    summary(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary>())
	,vrfs(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs>())
{
    summary->parent = this;
    children["summary"] = summary.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "interface-data"; yang_parent_name = "node";
}

Ipv6Network::Nodes::Node::InterfaceData::~InterfaceData()
{
}

bool Ipv6Network::Nodes::Node::InterfaceData::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv6Network::Nodes::Node::InterfaceData::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && is_set(summary->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Ipv6Network::Nodes::Node::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::InterfaceData::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::InterfaceData::get_children()
{
    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
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

void Ipv6Network::Nodes::Node::InterfaceData::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    interface_data(std::make_unique<Ipv6Network::Nodes::Node::InterfaceData>())
{
    interface_data->parent = this;
    children["interface-data"] = interface_data.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Ipv6Network::Nodes::Node::~Node()
{
}

bool Ipv6Network::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interface_data !=  nullptr && interface_data->has_data());
}

bool Ipv6Network::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (interface_data !=  nullptr && is_set(interface_data->operation));
}

std::string Ipv6Network::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ma-oper:ipv6-network/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-data")
    {
        if(interface_data != nullptr)
        {
            children["interface-data"] = interface_data.get();
        }
        else
        {
            interface_data = std::make_unique<Ipv6Network::Nodes::Node::InterfaceData>();
            interface_data->parent = this;
            children["interface-data"] = interface_data.get();
        }
        return children.at("interface-data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::Node::get_children()
{
    if(children.find("interface-data") == children.end())
    {
        if(interface_data != nullptr)
        {
            children["interface-data"] = interface_data.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Ipv6Network::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ipv6-network";
}

Ipv6Network::Nodes::~Nodes()
{
}

bool Ipv6Network::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Network::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Network::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Ipv6Network::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-ma-oper:ipv6-network/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6Network::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6Network::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6Network::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Network::Ipv6Network()
    :
    nodes(std::make_unique<Ipv6Network::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "ipv6-network"; yang_parent_name = "Cisco-IOS-XR-ipv6-ma-oper";
}

Ipv6Network::~Ipv6Network()
{
}

bool Ipv6Network::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ipv6Network::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Ipv6Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-ma-oper:ipv6-network";

    return path_buffer.str();

}

EntityPath Ipv6Network::get_entity_path(Entity* ancestor) const
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

Entity* Ipv6Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Ipv6Network::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6Network::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Ipv6Network::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ipv6Network::clone_ptr()
{
    return std::make_unique<Ipv6Network>();
}

const Enum::Value Ipv6MaOperStateEnum::oper_up {1, "oper-up"};
const Enum::Value Ipv6MaOperStateEnum::oper_down {2, "oper-down"};

const Enum::Value Ipv6MaIfLineStateEnum::down {1, "down"};
const Enum::Value Ipv6MaIfLineStateEnum::up {2, "up"};
const Enum::Value Ipv6MaIfLineStateEnum::unknown {3, "unknown"};
const Enum::Value Ipv6MaIfLineStateEnum::error {4, "error"};

const Enum::Value Ipv6MaIfAddrStateEnum::active {1, "active"};
const Enum::Value Ipv6MaIfAddrStateEnum::deprecated {2, "deprecated"};
const Enum::Value Ipv6MaIfAddrStateEnum::duplicate {3, "duplicate"};
const Enum::Value Ipv6MaIfAddrStateEnum::inaccessible {4, "inaccessible"};
const Enum::Value Ipv6MaIfAddrStateEnum::tentative {5, "tentative"};


}
}

