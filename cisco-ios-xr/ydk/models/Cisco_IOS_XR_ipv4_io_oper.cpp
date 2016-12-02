
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_io_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_io_oper {

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::Brief()
    :
    	interface_name{YType::str, "interface-name"},
	 line_state{YType::enumeration, "line-state"},
	 primary_address{YType::str, "primary-address"},
	 vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "brief"; yang_parent_name = "briefs";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::~Brief()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_data() const
{
    return interface_name.is_set
	|| line_state.is_set
	|| primary_address.is_set
	|| vrf_id.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(line_state.operation)
	|| is_set(primary_address.operation)
	|| is_set(vrf_id.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_entity_path(Entity* ancestor) const
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
    if (primary_address.is_set || is_set(primary_address.operation)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Briefs()
{
    yang_name = "briefs"; yang_parent_name = "vrf";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::~Briefs()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_data() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::has_operation() const
{
    for (std::size_t index=0; index<brief.size(); index++)
    {
        if(brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "briefs";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::Brief>();
        c->parent = this;
        brief.push_back(std::move(c));
        children[segment_path] = brief.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::get_children()
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

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::Acl()
    :
    	common_in_bound{YType::str, "common-in-bound"},
	 common_out_bound{YType::str, "common-out-bound"},
	 inbound{YType::str, "inbound"},
	 outbound{YType::str, "outbound"}
{
    yang_name = "acl"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::~Acl()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::has_data() const
{
    return common_in_bound.is_set
	|| common_out_bound.is_set
	|| inbound.is_set
	|| outbound.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(common_in_bound.operation)
	|| is_set(common_out_bound.operation)
	|| is_set(inbound.operation)
	|| is_set(outbound.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_entity_path(Entity* ancestor) const
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
    if (inbound.is_set || is_set(inbound.operation)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.operation)) leaf_name_data.push_back(outbound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
    }
    if(value_path == "inbound")
    {
        inbound = value;
    }
    if(value_path == "outbound")
    {
        outbound = value;
    }
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::MultiAcl()
    :
    	common{YType::str, "common"},
	 inbound{YType::str, "inbound"},
	 outbound{YType::str, "outbound"}
{
    yang_name = "multi-acl"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::~MultiAcl()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::has_data() const
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

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::has_operation() const
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

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-acl";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::HelperAddress()
    :
    	address_array{YType::str, "address-array"}
{
    yang_name = "helper-address"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::~HelperAddress()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::has_data() const
{
    for (auto const & leaf : address_array.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::has_operation() const
{
    for (auto const & leaf : address_array.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_entity_path(Entity* ancestor) const
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


    auto address_array_name_datas = address_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_array_name_datas.begin(), address_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-array")
    {
        address_array.append(value);
    }
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::Rpf()
    :
    	allow_default_route{YType::boolean, "allow-default-route"},
	 allow_self_ping{YType::boolean, "allow-self-ping"},
	 enable{YType::boolean, "enable"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "rpf"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::~Rpf()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_data() const
{
    return allow_default_route.is_set
	|| allow_self_ping.is_set
	|| enable.is_set
	|| mode.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default_route.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(enable.operation)
	|| is_set(mode.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::Input()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::boolean, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "input"; yang_parent_name = "bgp-pa";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::~Input()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::Output()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::boolean, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "output"; yang_parent_name = "bgp-pa";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::~Output()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::BgpPa()
    :
    input(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>())
	,output(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>())
{
    input->parent = this;
    children["input"] = input.get();

    output->parent = this;
    children["output"] = output.get();

    yang_name = "bgp-pa"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::~BgpPa()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && is_set(input->operation))
	|| (output !=  nullptr && is_set(output->operation));
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            input = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Input>();
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
            output = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::get_children()
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

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::PubUtime()
{
    yang_name = "pub-utime"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::~PubUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::IdbUtime()
{
    yang_name = "idb-utime"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::~IdbUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::CapsUtime()
{
    yang_name = "caps-utime"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::~CapsUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::FwdEnUtime()
{
    yang_name = "fwd-en-utime"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::FwdDisUtime()
{
    yang_name = "fwd-dis-utime"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::MulticastGroup()
    :
    	group_address{YType::str, "group-address"}
{
    yang_name = "multicast-group"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_data() const
{
    return group_address.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::SecondaryAddress()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "secondary-address"; yang_parent_name = "detail";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::~SecondaryAddress()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-address";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_entity_path(Entity* ancestor) const
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
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
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

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Detail()
    :
    	interface_name{YType::str, "interface-name"},
	 direct_broadcast{YType::boolean, "direct-broadcast"},
	 flow_tag_dst{YType::boolean, "flow-tag-dst"},
	 flow_tag_src{YType::boolean, "flow-tag-src"},
	 line_state{YType::enumeration, "line-state"},
	 mask_reply{YType::boolean, "mask-reply"},
	 mlacp_active{YType::boolean, "mlacp-active"},
	 mtu{YType::uint32, "mtu"},
	 prefix_length{YType::uint32, "prefix-length"},
	 primary_address{YType::str, "primary-address"},
	 proxy_arp_disabled{YType::boolean, "proxy-arp-disabled"},
	 redirect{YType::boolean, "redirect"},
	 rg_id_exists{YType::boolean, "rg-id-exists"},
	 route_tag{YType::uint32, "route-tag"},
	 unnumbered_interface_name{YType::str, "unnumbered-interface-name"},
	 unreachable{YType::boolean, "unreachable"},
	 vrf_id{YType::uint32, "vrf-id"}
    	,
    acl(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl>())
	,bgp_pa(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>())
	,caps_utime(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>())
	,fwd_dis_utime(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>())
	,fwd_en_utime(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>())
	,helper_address(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress>())
	,idb_utime(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>())
	,multi_acl(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl>())
	,pub_utime(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime>())
	,rpf(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>())
{
    acl->parent = this;
    children["acl"] = acl.get();

    bgp_pa->parent = this;
    children["bgp-pa"] = bgp_pa.get();

    caps_utime->parent = this;
    children["caps-utime"] = caps_utime.get();

    fwd_dis_utime->parent = this;
    children["fwd-dis-utime"] = fwd_dis_utime.get();

    fwd_en_utime->parent = this;
    children["fwd-en-utime"] = fwd_en_utime.get();

    helper_address->parent = this;
    children["helper-address"] = helper_address.get();

    idb_utime->parent = this;
    children["idb-utime"] = idb_utime.get();

    multi_acl->parent = this;
    children["multi-acl"] = multi_acl.get();

    pub_utime->parent = this;
    children["pub-utime"] = pub_utime.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    yang_name = "detail"; yang_parent_name = "details";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::~Detail()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_data() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| direct_broadcast.is_set
	|| flow_tag_dst.is_set
	|| flow_tag_src.is_set
	|| line_state.is_set
	|| mask_reply.is_set
	|| mlacp_active.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| primary_address.is_set
	|| proxy_arp_disabled.is_set
	|| redirect.is_set
	|| rg_id_exists.is_set
	|| route_tag.is_set
	|| unnumbered_interface_name.is_set
	|| unreachable.is_set
	|| vrf_id.is_set
	|| (acl !=  nullptr && acl->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (helper_address !=  nullptr && helper_address->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (multi_acl !=  nullptr && multi_acl->has_data())
	|| (pub_utime !=  nullptr && pub_utime->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::has_operation() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(direct_broadcast.operation)
	|| is_set(flow_tag_dst.operation)
	|| is_set(flow_tag_src.operation)
	|| is_set(line_state.operation)
	|| is_set(mask_reply.operation)
	|| is_set(mlacp_active.operation)
	|| is_set(mtu.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary_address.operation)
	|| is_set(proxy_arp_disabled.operation)
	|| is_set(redirect.operation)
	|| is_set(rg_id_exists.operation)
	|| is_set(route_tag.operation)
	|| is_set(unnumbered_interface_name.operation)
	|| is_set(unreachable.operation)
	|| is_set(vrf_id.operation)
	|| (acl !=  nullptr && is_set(acl->operation))
	|| (bgp_pa !=  nullptr && is_set(bgp_pa->operation))
	|| (caps_utime !=  nullptr && is_set(caps_utime->operation))
	|| (fwd_dis_utime !=  nullptr && is_set(fwd_dis_utime->operation))
	|| (fwd_en_utime !=  nullptr && is_set(fwd_en_utime->operation))
	|| (helper_address !=  nullptr && is_set(helper_address->operation))
	|| (idb_utime !=  nullptr && is_set(idb_utime->operation))
	|| (multi_acl !=  nullptr && is_set(multi_acl->operation))
	|| (pub_utime !=  nullptr && is_set(pub_utime->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation));
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_entity_path(Entity* ancestor) const
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
    if (direct_broadcast.is_set || is_set(direct_broadcast.operation)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.operation)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.operation)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mask_reply.is_set || is_set(mask_reply.operation)) leaf_name_data.push_back(mask_reply.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.operation)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.operation)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (proxy_arp_disabled.is_set || is_set(proxy_arp_disabled.operation)) leaf_name_data.push_back(proxy_arp_disabled.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.operation)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.operation)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.operation)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.operation)) leaf_name_data.push_back(unreachable.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl")
    {
        if(acl != nullptr)
        {
            children["acl"] = acl.get();
        }
        else
        {
            acl = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Acl>();
            acl->parent = this;
            children["acl"] = acl.get();
        }
        return children.at("acl");
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa.get();
        }
        else
        {
            bgp_pa = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::BgpPa>();
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
            caps_utime = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::CapsUtime>();
            caps_utime->parent = this;
            children["caps-utime"] = caps_utime.get();
        }
        return children.at("caps-utime");
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime != nullptr)
        {
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
        else
        {
            fwd_dis_utime = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdDisUtime>();
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
            fwd_en_utime = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::FwdEnUtime>();
            fwd_en_utime->parent = this;
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
        return children.at("fwd-en-utime");
    }

    if(child_yang_name == "helper-address")
    {
        if(helper_address != nullptr)
        {
            children["helper-address"] = helper_address.get();
        }
        else
        {
            helper_address = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::HelperAddress>();
            helper_address->parent = this;
            children["helper-address"] = helper_address.get();
        }
        return children.at("helper-address");
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
        else
        {
            idb_utime = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::IdbUtime>();
            idb_utime->parent = this;
            children["idb-utime"] = idb_utime.get();
        }
        return children.at("idb-utime");
    }

    if(child_yang_name == "multi-acl")
    {
        if(multi_acl != nullptr)
        {
            children["multi-acl"] = multi_acl.get();
        }
        else
        {
            multi_acl = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MultiAcl>();
            multi_acl->parent = this;
            children["multi-acl"] = multi_acl.get();
        }
        return children.at("multi-acl");
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
        auto c = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(std::move(c));
        children[segment_path] = multicast_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "pub-utime")
    {
        if(pub_utime != nullptr)
        {
            children["pub-utime"] = pub_utime.get();
        }
        else
        {
            pub_utime = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::PubUtime>();
            pub_utime->parent = this;
            children["pub-utime"] = pub_utime.get();
        }
        return children.at("pub-utime");
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "secondary-address")
    {
        for(auto const & c : secondary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::SecondaryAddress>();
        c->parent = this;
        secondary_address.push_back(std::move(c));
        children[segment_path] = secondary_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::get_children()
{
    if(children.find("acl") == children.end())
    {
        if(acl != nullptr)
        {
            children["acl"] = acl.get();
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

    if(children.find("helper-address") == children.end())
    {
        if(helper_address != nullptr)
        {
            children["helper-address"] = helper_address.get();
        }
    }

    if(children.find("idb-utime") == children.end())
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
    }

    if(children.find("multi-acl") == children.end())
    {
        if(multi_acl != nullptr)
        {
            children["multi-acl"] = multi_acl.get();
        }
    }

    for (auto const & c : multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("pub-utime") == children.end())
    {
        if(pub_utime != nullptr)
        {
            children["pub-utime"] = pub_utime.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    for (auto const & c : secondary_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mask-reply")
    {
        mask_reply = value;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
    }
    if(value_path == "proxy-arp-disabled")
    {
        proxy_arp_disabled = value;
    }
    if(value_path == "redirect")
    {
        redirect = value;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Details()
{
    yang_name = "details"; yang_parent_name = "vrf";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::~Details()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_data() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::has_operation() const
{
    for (std::size_t index=0; index<detail.size(); index++)
    {
        if(detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "details";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::Detail>();
        c->parent = this;
        detail.push_back(std::move(c));
        children[segment_path] = detail.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::get_children()
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

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    briefs(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>())
	,details(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>())
{
    briefs->parent = this;
    children["briefs"] = briefs.get();

    details->parent = this;
    children["details"] = details.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (briefs !=  nullptr && briefs->has_data())
	|| (details !=  nullptr && details->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (briefs !=  nullptr && is_set(briefs->operation))
	|| (details !=  nullptr && is_set(details->operation));
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            briefs = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Briefs>();
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
            details = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::Details>();
            details->parent = this;
            children["details"] = details.get();
        }
        return children.at("details");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::get_children()
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

    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "interface-data";
}

Ipv4Network::Nodes::Node::InterfaceData::Vrfs::~Vrfs()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Vrfs::get_children()
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

void Ipv4Network::Nodes::Node::InterfaceData::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::IfUpUp()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-up-up"; yang_parent_name = "summary";
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::~IfUpUp()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-up";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::IfUpDown()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-up-down"; yang_parent_name = "summary";
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::~IfUpDown()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-up-down";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::IfDownDown()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-down-down"; yang_parent_name = "summary";
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::~IfDownDown()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-down-down";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::IfShutdownDown()
    :
    	ip_assigned{YType::uint32, "ip-assigned"},
	 ip_unassigned{YType::uint32, "ip-unassigned"},
	 ip_unnumbered{YType::uint32, "ip-unnumbered"}
{
    yang_name = "if-shutdown-down"; yang_parent_name = "summary";
}

Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::~IfShutdownDown()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_data() const
{
    return ip_assigned.is_set
	|| ip_unassigned.is_set
	|| ip_unnumbered.is_set;
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_assigned.operation)
	|| is_set(ip_unassigned.operation)
	|| is_set(ip_unnumbered.operation);
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "if-shutdown-down";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Nodes::Node::InterfaceData::Summary::Summary()
    :
    	if_up_down_basecaps_up{YType::uint32, "if-up-down-basecaps-up"}
    	,
    if_down_down(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown>())
	,if_shutdown_down(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>())
	,if_up_down(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown>())
	,if_up_up(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp>())
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

Ipv4Network::Nodes::Node::InterfaceData::Summary::~Summary()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::has_data() const
{
    return if_up_down_basecaps_up.is_set
	|| (if_down_down !=  nullptr && if_down_down->has_data())
	|| (if_shutdown_down !=  nullptr && if_shutdown_down->has_data())
	|| (if_up_down !=  nullptr && if_up_down->has_data())
	|| (if_up_up !=  nullptr && if_up_up->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(if_up_down_basecaps_up.operation)
	|| (if_down_down !=  nullptr && is_set(if_down_down->operation))
	|| (if_shutdown_down !=  nullptr && is_set(if_shutdown_down->operation))
	|| (if_up_down !=  nullptr && is_set(if_up_down->operation))
	|| (if_up_up !=  nullptr && is_set(if_up_up->operation));
}

std::string Ipv4Network::Nodes::Node::InterfaceData::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::Summary::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            if_down_down = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfDownDown>();
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
            if_shutdown_down = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfShutdownDown>();
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
            if_up_down = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpDown>();
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
            if_up_up = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary::IfUpUp>();
            if_up_up->parent = this;
            children["if-up-up"] = if_up_up.get();
        }
        return children.at("if-up-up");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::Summary::get_children()
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

void Ipv4Network::Nodes::Node::InterfaceData::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-up-down-basecaps-up")
    {
        if_up_down_basecaps_up = value;
    }
}

Ipv4Network::Nodes::Node::InterfaceData::InterfaceData()
    :
    summary(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary>())
	,vrfs(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs>())
{
    summary->parent = this;
    children["summary"] = summary.get();

    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "interface-data"; yang_parent_name = "node";
}

Ipv4Network::Nodes::Node::InterfaceData::~InterfaceData()
{
}

bool Ipv4Network::Nodes::Node::InterfaceData::has_data() const
{
    return (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Network::Nodes::Node::InterfaceData::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && is_set(summary->operation))
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Ipv4Network::Nodes::Node::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::InterfaceData::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            summary = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Summary>();
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
            vrfs = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::InterfaceData::get_children()
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

void Ipv4Network::Nodes::Node::InterfaceData::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::Ipv4Stats()
    :
    	bad_header{YType::uint32, "bad-header"},
	 bad_hop_count{YType::uint32, "bad-hop-count"},
	 bad_option{YType::uint32, "bad-option"},
	 bad_security_option{YType::uint32, "bad-security-option"},
	 bad_source_address{YType::uint32, "bad-source-address"},
	 basic_security_option{YType::uint32, "basic-security-option"},
	 broadcast_in{YType::uint32, "broadcast-in"},
	 broadcast_out{YType::uint32, "broadcast-out"},
	 cipso_option{YType::uint32, "cipso-option"},
	 encapsulation_failed{YType::uint32, "encapsulation-failed"},
	 end_option{YType::uint32, "end-option"},
	 extended_security_option{YType::uint32, "extended-security-option"},
	 format_errors{YType::uint32, "format-errors"},
	 fragment_count{YType::uint32, "fragment-count"},
	 input_packets{YType::uint32, "input-packets"},
	 lisp_decap_error{YType::uint32, "lisp-decap-error"},
	 lisp_encap_error{YType::uint32, "lisp-encap-error"},
	 lisp_v4_decap{YType::uint32, "lisp-v4-decap"},
	 lisp_v4_encap{YType::uint32, "lisp-v4-encap"},
	 lisp_v6_decap{YType::uint32, "lisp-v6-decap"},
	 lisp_v6_encap{YType::uint32, "lisp-v6-encap"},
	 loose_source_route_option{YType::uint32, "loose-source-route-option"},
	 multicast_in{YType::uint32, "multicast-in"},
	 multicast_out{YType::uint32, "multicast-out"},
	 no_gateway{YType::uint32, "no-gateway"},
	 no_protocol{YType::uint32, "no-protocol"},
	 no_router{YType::uint32, "no-router"},
	 noop_option{YType::uint32, "noop-option"},
	 options_present{YType::uint32, "options-present"},
	 packet_too_big{YType::uint32, "packet-too-big"},
	 packets_forwarded{YType::uint32, "packets-forwarded"},
	 packets_fragmented{YType::uint32, "packets-fragmented"},
	 packets_output{YType::uint32, "packets-output"},
	 reassemble_failed{YType::uint32, "reassemble-failed"},
	 reassemble_input{YType::uint32, "reassemble-input"},
	 reassemble_max_drop{YType::uint32, "reassemble-max-drop"},
	 reassemble_timeout{YType::uint32, "reassemble-timeout"},
	 reassembled{YType::uint32, "reassembled"},
	 received_packets{YType::uint32, "received-packets"},
	 record_route_option{YType::uint32, "record-route-option"},
	 router_alert_option{YType::uint32, "router-alert-option"},
	 sid_option{YType::uint32, "sid-option"},
	 strict_source_route_option{YType::uint32, "strict-source-route-option"},
	 timestamp_option{YType::uint32, "timestamp-option"},
	 unknown_option{YType::uint32, "unknown-option"}
{
    yang_name = "ipv4-stats"; yang_parent_name = "traffic";
}

Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::~Ipv4Stats()
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::has_data() const
{
    return bad_header.is_set
	|| bad_hop_count.is_set
	|| bad_option.is_set
	|| bad_security_option.is_set
	|| bad_source_address.is_set
	|| basic_security_option.is_set
	|| broadcast_in.is_set
	|| broadcast_out.is_set
	|| cipso_option.is_set
	|| encapsulation_failed.is_set
	|| end_option.is_set
	|| extended_security_option.is_set
	|| format_errors.is_set
	|| fragment_count.is_set
	|| input_packets.is_set
	|| lisp_decap_error.is_set
	|| lisp_encap_error.is_set
	|| lisp_v4_decap.is_set
	|| lisp_v4_encap.is_set
	|| lisp_v6_decap.is_set
	|| lisp_v6_encap.is_set
	|| loose_source_route_option.is_set
	|| multicast_in.is_set
	|| multicast_out.is_set
	|| no_gateway.is_set
	|| no_protocol.is_set
	|| no_router.is_set
	|| noop_option.is_set
	|| options_present.is_set
	|| packet_too_big.is_set
	|| packets_forwarded.is_set
	|| packets_fragmented.is_set
	|| packets_output.is_set
	|| reassemble_failed.is_set
	|| reassemble_input.is_set
	|| reassemble_max_drop.is_set
	|| reassemble_timeout.is_set
	|| reassembled.is_set
	|| received_packets.is_set
	|| record_route_option.is_set
	|| router_alert_option.is_set
	|| sid_option.is_set
	|| strict_source_route_option.is_set
	|| timestamp_option.is_set
	|| unknown_option.is_set;
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::has_operation() const
{
    return is_set(operation)
	|| is_set(bad_header.operation)
	|| is_set(bad_hop_count.operation)
	|| is_set(bad_option.operation)
	|| is_set(bad_security_option.operation)
	|| is_set(bad_source_address.operation)
	|| is_set(basic_security_option.operation)
	|| is_set(broadcast_in.operation)
	|| is_set(broadcast_out.operation)
	|| is_set(cipso_option.operation)
	|| is_set(encapsulation_failed.operation)
	|| is_set(end_option.operation)
	|| is_set(extended_security_option.operation)
	|| is_set(format_errors.operation)
	|| is_set(fragment_count.operation)
	|| is_set(input_packets.operation)
	|| is_set(lisp_decap_error.operation)
	|| is_set(lisp_encap_error.operation)
	|| is_set(lisp_v4_decap.operation)
	|| is_set(lisp_v4_encap.operation)
	|| is_set(lisp_v6_decap.operation)
	|| is_set(lisp_v6_encap.operation)
	|| is_set(loose_source_route_option.operation)
	|| is_set(multicast_in.operation)
	|| is_set(multicast_out.operation)
	|| is_set(no_gateway.operation)
	|| is_set(no_protocol.operation)
	|| is_set(no_router.operation)
	|| is_set(noop_option.operation)
	|| is_set(options_present.operation)
	|| is_set(packet_too_big.operation)
	|| is_set(packets_forwarded.operation)
	|| is_set(packets_fragmented.operation)
	|| is_set(packets_output.operation)
	|| is_set(reassemble_failed.operation)
	|| is_set(reassemble_input.operation)
	|| is_set(reassemble_max_drop.operation)
	|| is_set(reassemble_timeout.operation)
	|| is_set(reassembled.operation)
	|| is_set(received_packets.operation)
	|| is_set(record_route_option.operation)
	|| is_set(router_alert_option.operation)
	|| is_set(sid_option.operation)
	|| is_set(strict_source_route_option.operation)
	|| is_set(timestamp_option.operation)
	|| is_set(unknown_option.operation);
}

std::string Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-stats";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_entity_path(Entity* ancestor) const
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

    if (bad_header.is_set || is_set(bad_header.operation)) leaf_name_data.push_back(bad_header.get_name_leafdata());
    if (bad_hop_count.is_set || is_set(bad_hop_count.operation)) leaf_name_data.push_back(bad_hop_count.get_name_leafdata());
    if (bad_option.is_set || is_set(bad_option.operation)) leaf_name_data.push_back(bad_option.get_name_leafdata());
    if (bad_security_option.is_set || is_set(bad_security_option.operation)) leaf_name_data.push_back(bad_security_option.get_name_leafdata());
    if (bad_source_address.is_set || is_set(bad_source_address.operation)) leaf_name_data.push_back(bad_source_address.get_name_leafdata());
    if (basic_security_option.is_set || is_set(basic_security_option.operation)) leaf_name_data.push_back(basic_security_option.get_name_leafdata());
    if (broadcast_in.is_set || is_set(broadcast_in.operation)) leaf_name_data.push_back(broadcast_in.get_name_leafdata());
    if (broadcast_out.is_set || is_set(broadcast_out.operation)) leaf_name_data.push_back(broadcast_out.get_name_leafdata());
    if (cipso_option.is_set || is_set(cipso_option.operation)) leaf_name_data.push_back(cipso_option.get_name_leafdata());
    if (encapsulation_failed.is_set || is_set(encapsulation_failed.operation)) leaf_name_data.push_back(encapsulation_failed.get_name_leafdata());
    if (end_option.is_set || is_set(end_option.operation)) leaf_name_data.push_back(end_option.get_name_leafdata());
    if (extended_security_option.is_set || is_set(extended_security_option.operation)) leaf_name_data.push_back(extended_security_option.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (fragment_count.is_set || is_set(fragment_count.operation)) leaf_name_data.push_back(fragment_count.get_name_leafdata());
    if (input_packets.is_set || is_set(input_packets.operation)) leaf_name_data.push_back(input_packets.get_name_leafdata());
    if (lisp_decap_error.is_set || is_set(lisp_decap_error.operation)) leaf_name_data.push_back(lisp_decap_error.get_name_leafdata());
    if (lisp_encap_error.is_set || is_set(lisp_encap_error.operation)) leaf_name_data.push_back(lisp_encap_error.get_name_leafdata());
    if (lisp_v4_decap.is_set || is_set(lisp_v4_decap.operation)) leaf_name_data.push_back(lisp_v4_decap.get_name_leafdata());
    if (lisp_v4_encap.is_set || is_set(lisp_v4_encap.operation)) leaf_name_data.push_back(lisp_v4_encap.get_name_leafdata());
    if (lisp_v6_decap.is_set || is_set(lisp_v6_decap.operation)) leaf_name_data.push_back(lisp_v6_decap.get_name_leafdata());
    if (lisp_v6_encap.is_set || is_set(lisp_v6_encap.operation)) leaf_name_data.push_back(lisp_v6_encap.get_name_leafdata());
    if (loose_source_route_option.is_set || is_set(loose_source_route_option.operation)) leaf_name_data.push_back(loose_source_route_option.get_name_leafdata());
    if (multicast_in.is_set || is_set(multicast_in.operation)) leaf_name_data.push_back(multicast_in.get_name_leafdata());
    if (multicast_out.is_set || is_set(multicast_out.operation)) leaf_name_data.push_back(multicast_out.get_name_leafdata());
    if (no_gateway.is_set || is_set(no_gateway.operation)) leaf_name_data.push_back(no_gateway.get_name_leafdata());
    if (no_protocol.is_set || is_set(no_protocol.operation)) leaf_name_data.push_back(no_protocol.get_name_leafdata());
    if (no_router.is_set || is_set(no_router.operation)) leaf_name_data.push_back(no_router.get_name_leafdata());
    if (noop_option.is_set || is_set(noop_option.operation)) leaf_name_data.push_back(noop_option.get_name_leafdata());
    if (options_present.is_set || is_set(options_present.operation)) leaf_name_data.push_back(options_present.get_name_leafdata());
    if (packet_too_big.is_set || is_set(packet_too_big.operation)) leaf_name_data.push_back(packet_too_big.get_name_leafdata());
    if (packets_forwarded.is_set || is_set(packets_forwarded.operation)) leaf_name_data.push_back(packets_forwarded.get_name_leafdata());
    if (packets_fragmented.is_set || is_set(packets_fragmented.operation)) leaf_name_data.push_back(packets_fragmented.get_name_leafdata());
    if (packets_output.is_set || is_set(packets_output.operation)) leaf_name_data.push_back(packets_output.get_name_leafdata());
    if (reassemble_failed.is_set || is_set(reassemble_failed.operation)) leaf_name_data.push_back(reassemble_failed.get_name_leafdata());
    if (reassemble_input.is_set || is_set(reassemble_input.operation)) leaf_name_data.push_back(reassemble_input.get_name_leafdata());
    if (reassemble_max_drop.is_set || is_set(reassemble_max_drop.operation)) leaf_name_data.push_back(reassemble_max_drop.get_name_leafdata());
    if (reassemble_timeout.is_set || is_set(reassemble_timeout.operation)) leaf_name_data.push_back(reassemble_timeout.get_name_leafdata());
    if (reassembled.is_set || is_set(reassembled.operation)) leaf_name_data.push_back(reassembled.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (record_route_option.is_set || is_set(record_route_option.operation)) leaf_name_data.push_back(record_route_option.get_name_leafdata());
    if (router_alert_option.is_set || is_set(router_alert_option.operation)) leaf_name_data.push_back(router_alert_option.get_name_leafdata());
    if (sid_option.is_set || is_set(sid_option.operation)) leaf_name_data.push_back(sid_option.get_name_leafdata());
    if (strict_source_route_option.is_set || is_set(strict_source_route_option.operation)) leaf_name_data.push_back(strict_source_route_option.get_name_leafdata());
    if (timestamp_option.is_set || is_set(timestamp_option.operation)) leaf_name_data.push_back(timestamp_option.get_name_leafdata());
    if (unknown_option.is_set || is_set(unknown_option.operation)) leaf_name_data.push_back(unknown_option.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bad-header")
    {
        bad_header = value;
    }
    if(value_path == "bad-hop-count")
    {
        bad_hop_count = value;
    }
    if(value_path == "bad-option")
    {
        bad_option = value;
    }
    if(value_path == "bad-security-option")
    {
        bad_security_option = value;
    }
    if(value_path == "bad-source-address")
    {
        bad_source_address = value;
    }
    if(value_path == "basic-security-option")
    {
        basic_security_option = value;
    }
    if(value_path == "broadcast-in")
    {
        broadcast_in = value;
    }
    if(value_path == "broadcast-out")
    {
        broadcast_out = value;
    }
    if(value_path == "cipso-option")
    {
        cipso_option = value;
    }
    if(value_path == "encapsulation-failed")
    {
        encapsulation_failed = value;
    }
    if(value_path == "end-option")
    {
        end_option = value;
    }
    if(value_path == "extended-security-option")
    {
        extended_security_option = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "fragment-count")
    {
        fragment_count = value;
    }
    if(value_path == "input-packets")
    {
        input_packets = value;
    }
    if(value_path == "lisp-decap-error")
    {
        lisp_decap_error = value;
    }
    if(value_path == "lisp-encap-error")
    {
        lisp_encap_error = value;
    }
    if(value_path == "lisp-v4-decap")
    {
        lisp_v4_decap = value;
    }
    if(value_path == "lisp-v4-encap")
    {
        lisp_v4_encap = value;
    }
    if(value_path == "lisp-v6-decap")
    {
        lisp_v6_decap = value;
    }
    if(value_path == "lisp-v6-encap")
    {
        lisp_v6_encap = value;
    }
    if(value_path == "loose-source-route-option")
    {
        loose_source_route_option = value;
    }
    if(value_path == "multicast-in")
    {
        multicast_in = value;
    }
    if(value_path == "multicast-out")
    {
        multicast_out = value;
    }
    if(value_path == "no-gateway")
    {
        no_gateway = value;
    }
    if(value_path == "no-protocol")
    {
        no_protocol = value;
    }
    if(value_path == "no-router")
    {
        no_router = value;
    }
    if(value_path == "noop-option")
    {
        noop_option = value;
    }
    if(value_path == "options-present")
    {
        options_present = value;
    }
    if(value_path == "packet-too-big")
    {
        packet_too_big = value;
    }
    if(value_path == "packets-forwarded")
    {
        packets_forwarded = value;
    }
    if(value_path == "packets-fragmented")
    {
        packets_fragmented = value;
    }
    if(value_path == "packets-output")
    {
        packets_output = value;
    }
    if(value_path == "reassemble-failed")
    {
        reassemble_failed = value;
    }
    if(value_path == "reassemble-input")
    {
        reassemble_input = value;
    }
    if(value_path == "reassemble-max-drop")
    {
        reassemble_max_drop = value;
    }
    if(value_path == "reassemble-timeout")
    {
        reassemble_timeout = value;
    }
    if(value_path == "reassembled")
    {
        reassembled = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "record-route-option")
    {
        record_route_option = value;
    }
    if(value_path == "router-alert-option")
    {
        router_alert_option = value;
    }
    if(value_path == "sid-option")
    {
        sid_option = value;
    }
    if(value_path == "strict-source-route-option")
    {
        strict_source_route_option = value;
    }
    if(value_path == "timestamp-option")
    {
        timestamp_option = value;
    }
    if(value_path == "unknown-option")
    {
        unknown_option = value;
    }
}

Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::IcmpStats()
    :
    	admin_unreachable_received{YType::uint32, "admin-unreachable-received"},
	 admin_unreachable_sent{YType::uint32, "admin-unreachable-sent"},
	 checksum_error{YType::uint32, "checksum-error"},
	 echo_reply_received{YType::uint32, "echo-reply-received"},
	 echo_reply_sent{YType::uint32, "echo-reply-sent"},
	 echo_request_received{YType::uint32, "echo-request-received"},
	 echo_request_sent{YType::uint32, "echo-request-sent"},
	 fragment_unreachable_received{YType::uint32, "fragment-unreachable-received"},
	 fragment_unreachable_sent{YType::uint32, "fragment-unreachable-sent"},
	 hopcount_received{YType::uint32, "hopcount-received"},
	 hopcount_sent{YType::uint32, "hopcount-sent"},
	 host_unreachable_received{YType::uint32, "host-unreachable-received"},
	 host_unreachable_sent{YType::uint32, "host-unreachable-sent"},
	 mask_reply_received{YType::uint32, "mask-reply-received"},
	 mask_reply_sent{YType::uint32, "mask-reply-sent"},
	 mask_request_received{YType::uint32, "mask-request-received"},
	 mask_request_sent{YType::uint32, "mask-request-sent"},
	 network_unreachable_received{YType::uint32, "network-unreachable-received"},
	 network_unreachable_sent{YType::uint32, "network-unreachable-sent"},
	 output{YType::uint32, "output"},
	 param_error_received{YType::uint32, "param-error-received"},
	 param_error_send{YType::uint32, "param-error-send"},
	 port_unreachable_received{YType::uint32, "port-unreachable-received"},
	 port_unreachable_sent{YType::uint32, "port-unreachable-sent"},
	 protocol_unreachable_received{YType::uint32, "protocol-unreachable-received"},
	 protocol_unreachable_sent{YType::uint32, "protocol-unreachable-sent"},
	 reassebly_received{YType::uint32, "reassebly-received"},
	 reassembly_sent{YType::uint32, "reassembly-sent"},
	 received{YType::uint32, "received"},
	 redirect_received{YType::uint32, "redirect-received"},
	 redirect_send{YType::uint32, "redirect-send"},
	 router_advert_received{YType::uint32, "router-advert-received"},
	 router_solicit_received{YType::uint32, "router-solicit-received"},
	 source_quench_received{YType::uint32, "source-quench-received"},
	 timestamp_received{YType::uint32, "timestamp-received"},
	 timestamp_reply_received{YType::uint32, "timestamp-reply-received"},
	 unknown{YType::uint32, "unknown"}
{
    yang_name = "icmp-stats"; yang_parent_name = "traffic";
}

Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::~IcmpStats()
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::has_data() const
{
    return admin_unreachable_received.is_set
	|| admin_unreachable_sent.is_set
	|| checksum_error.is_set
	|| echo_reply_received.is_set
	|| echo_reply_sent.is_set
	|| echo_request_received.is_set
	|| echo_request_sent.is_set
	|| fragment_unreachable_received.is_set
	|| fragment_unreachable_sent.is_set
	|| hopcount_received.is_set
	|| hopcount_sent.is_set
	|| host_unreachable_received.is_set
	|| host_unreachable_sent.is_set
	|| mask_reply_received.is_set
	|| mask_reply_sent.is_set
	|| mask_request_received.is_set
	|| mask_request_sent.is_set
	|| network_unreachable_received.is_set
	|| network_unreachable_sent.is_set
	|| output.is_set
	|| param_error_received.is_set
	|| param_error_send.is_set
	|| port_unreachable_received.is_set
	|| port_unreachable_sent.is_set
	|| protocol_unreachable_received.is_set
	|| protocol_unreachable_sent.is_set
	|| reassebly_received.is_set
	|| reassembly_sent.is_set
	|| received.is_set
	|| redirect_received.is_set
	|| redirect_send.is_set
	|| router_advert_received.is_set
	|| router_solicit_received.is_set
	|| source_quench_received.is_set
	|| timestamp_received.is_set
	|| timestamp_reply_received.is_set
	|| unknown.is_set;
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_unreachable_received.operation)
	|| is_set(admin_unreachable_sent.operation)
	|| is_set(checksum_error.operation)
	|| is_set(echo_reply_received.operation)
	|| is_set(echo_reply_sent.operation)
	|| is_set(echo_request_received.operation)
	|| is_set(echo_request_sent.operation)
	|| is_set(fragment_unreachable_received.operation)
	|| is_set(fragment_unreachable_sent.operation)
	|| is_set(hopcount_received.operation)
	|| is_set(hopcount_sent.operation)
	|| is_set(host_unreachable_received.operation)
	|| is_set(host_unreachable_sent.operation)
	|| is_set(mask_reply_received.operation)
	|| is_set(mask_reply_sent.operation)
	|| is_set(mask_request_received.operation)
	|| is_set(mask_request_sent.operation)
	|| is_set(network_unreachable_received.operation)
	|| is_set(network_unreachable_sent.operation)
	|| is_set(output.operation)
	|| is_set(param_error_received.operation)
	|| is_set(param_error_send.operation)
	|| is_set(port_unreachable_received.operation)
	|| is_set(port_unreachable_sent.operation)
	|| is_set(protocol_unreachable_received.operation)
	|| is_set(protocol_unreachable_sent.operation)
	|| is_set(reassebly_received.operation)
	|| is_set(reassembly_sent.operation)
	|| is_set(received.operation)
	|| is_set(redirect_received.operation)
	|| is_set(redirect_send.operation)
	|| is_set(router_advert_received.operation)
	|| is_set(router_solicit_received.operation)
	|| is_set(source_quench_received.operation)
	|| is_set(timestamp_received.operation)
	|| is_set(timestamp_reply_received.operation)
	|| is_set(unknown.operation);
}

std::string Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-stats";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_entity_path(Entity* ancestor) const
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

    if (admin_unreachable_received.is_set || is_set(admin_unreachable_received.operation)) leaf_name_data.push_back(admin_unreachable_received.get_name_leafdata());
    if (admin_unreachable_sent.is_set || is_set(admin_unreachable_sent.operation)) leaf_name_data.push_back(admin_unreachable_sent.get_name_leafdata());
    if (checksum_error.is_set || is_set(checksum_error.operation)) leaf_name_data.push_back(checksum_error.get_name_leafdata());
    if (echo_reply_received.is_set || is_set(echo_reply_received.operation)) leaf_name_data.push_back(echo_reply_received.get_name_leafdata());
    if (echo_reply_sent.is_set || is_set(echo_reply_sent.operation)) leaf_name_data.push_back(echo_reply_sent.get_name_leafdata());
    if (echo_request_received.is_set || is_set(echo_request_received.operation)) leaf_name_data.push_back(echo_request_received.get_name_leafdata());
    if (echo_request_sent.is_set || is_set(echo_request_sent.operation)) leaf_name_data.push_back(echo_request_sent.get_name_leafdata());
    if (fragment_unreachable_received.is_set || is_set(fragment_unreachable_received.operation)) leaf_name_data.push_back(fragment_unreachable_received.get_name_leafdata());
    if (fragment_unreachable_sent.is_set || is_set(fragment_unreachable_sent.operation)) leaf_name_data.push_back(fragment_unreachable_sent.get_name_leafdata());
    if (hopcount_received.is_set || is_set(hopcount_received.operation)) leaf_name_data.push_back(hopcount_received.get_name_leafdata());
    if (hopcount_sent.is_set || is_set(hopcount_sent.operation)) leaf_name_data.push_back(hopcount_sent.get_name_leafdata());
    if (host_unreachable_received.is_set || is_set(host_unreachable_received.operation)) leaf_name_data.push_back(host_unreachable_received.get_name_leafdata());
    if (host_unreachable_sent.is_set || is_set(host_unreachable_sent.operation)) leaf_name_data.push_back(host_unreachable_sent.get_name_leafdata());
    if (mask_reply_received.is_set || is_set(mask_reply_received.operation)) leaf_name_data.push_back(mask_reply_received.get_name_leafdata());
    if (mask_reply_sent.is_set || is_set(mask_reply_sent.operation)) leaf_name_data.push_back(mask_reply_sent.get_name_leafdata());
    if (mask_request_received.is_set || is_set(mask_request_received.operation)) leaf_name_data.push_back(mask_request_received.get_name_leafdata());
    if (mask_request_sent.is_set || is_set(mask_request_sent.operation)) leaf_name_data.push_back(mask_request_sent.get_name_leafdata());
    if (network_unreachable_received.is_set || is_set(network_unreachable_received.operation)) leaf_name_data.push_back(network_unreachable_received.get_name_leafdata());
    if (network_unreachable_sent.is_set || is_set(network_unreachable_sent.operation)) leaf_name_data.push_back(network_unreachable_sent.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());
    if (param_error_received.is_set || is_set(param_error_received.operation)) leaf_name_data.push_back(param_error_received.get_name_leafdata());
    if (param_error_send.is_set || is_set(param_error_send.operation)) leaf_name_data.push_back(param_error_send.get_name_leafdata());
    if (port_unreachable_received.is_set || is_set(port_unreachable_received.operation)) leaf_name_data.push_back(port_unreachable_received.get_name_leafdata());
    if (port_unreachable_sent.is_set || is_set(port_unreachable_sent.operation)) leaf_name_data.push_back(port_unreachable_sent.get_name_leafdata());
    if (protocol_unreachable_received.is_set || is_set(protocol_unreachable_received.operation)) leaf_name_data.push_back(protocol_unreachable_received.get_name_leafdata());
    if (protocol_unreachable_sent.is_set || is_set(protocol_unreachable_sent.operation)) leaf_name_data.push_back(protocol_unreachable_sent.get_name_leafdata());
    if (reassebly_received.is_set || is_set(reassebly_received.operation)) leaf_name_data.push_back(reassebly_received.get_name_leafdata());
    if (reassembly_sent.is_set || is_set(reassembly_sent.operation)) leaf_name_data.push_back(reassembly_sent.get_name_leafdata());
    if (received.is_set || is_set(received.operation)) leaf_name_data.push_back(received.get_name_leafdata());
    if (redirect_received.is_set || is_set(redirect_received.operation)) leaf_name_data.push_back(redirect_received.get_name_leafdata());
    if (redirect_send.is_set || is_set(redirect_send.operation)) leaf_name_data.push_back(redirect_send.get_name_leafdata());
    if (router_advert_received.is_set || is_set(router_advert_received.operation)) leaf_name_data.push_back(router_advert_received.get_name_leafdata());
    if (router_solicit_received.is_set || is_set(router_solicit_received.operation)) leaf_name_data.push_back(router_solicit_received.get_name_leafdata());
    if (source_quench_received.is_set || is_set(source_quench_received.operation)) leaf_name_data.push_back(source_quench_received.get_name_leafdata());
    if (timestamp_received.is_set || is_set(timestamp_received.operation)) leaf_name_data.push_back(timestamp_received.get_name_leafdata());
    if (timestamp_reply_received.is_set || is_set(timestamp_reply_received.operation)) leaf_name_data.push_back(timestamp_reply_received.get_name_leafdata());
    if (unknown.is_set || is_set(unknown.operation)) leaf_name_data.push_back(unknown.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::get_children()
{
    return children;
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-unreachable-received")
    {
        admin_unreachable_received = value;
    }
    if(value_path == "admin-unreachable-sent")
    {
        admin_unreachable_sent = value;
    }
    if(value_path == "checksum-error")
    {
        checksum_error = value;
    }
    if(value_path == "echo-reply-received")
    {
        echo_reply_received = value;
    }
    if(value_path == "echo-reply-sent")
    {
        echo_reply_sent = value;
    }
    if(value_path == "echo-request-received")
    {
        echo_request_received = value;
    }
    if(value_path == "echo-request-sent")
    {
        echo_request_sent = value;
    }
    if(value_path == "fragment-unreachable-received")
    {
        fragment_unreachable_received = value;
    }
    if(value_path == "fragment-unreachable-sent")
    {
        fragment_unreachable_sent = value;
    }
    if(value_path == "hopcount-received")
    {
        hopcount_received = value;
    }
    if(value_path == "hopcount-sent")
    {
        hopcount_sent = value;
    }
    if(value_path == "host-unreachable-received")
    {
        host_unreachable_received = value;
    }
    if(value_path == "host-unreachable-sent")
    {
        host_unreachable_sent = value;
    }
    if(value_path == "mask-reply-received")
    {
        mask_reply_received = value;
    }
    if(value_path == "mask-reply-sent")
    {
        mask_reply_sent = value;
    }
    if(value_path == "mask-request-received")
    {
        mask_request_received = value;
    }
    if(value_path == "mask-request-sent")
    {
        mask_request_sent = value;
    }
    if(value_path == "network-unreachable-received")
    {
        network_unreachable_received = value;
    }
    if(value_path == "network-unreachable-sent")
    {
        network_unreachable_sent = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
    if(value_path == "param-error-received")
    {
        param_error_received = value;
    }
    if(value_path == "param-error-send")
    {
        param_error_send = value;
    }
    if(value_path == "port-unreachable-received")
    {
        port_unreachable_received = value;
    }
    if(value_path == "port-unreachable-sent")
    {
        port_unreachable_sent = value;
    }
    if(value_path == "protocol-unreachable-received")
    {
        protocol_unreachable_received = value;
    }
    if(value_path == "protocol-unreachable-sent")
    {
        protocol_unreachable_sent = value;
    }
    if(value_path == "reassebly-received")
    {
        reassebly_received = value;
    }
    if(value_path == "reassembly-sent")
    {
        reassembly_sent = value;
    }
    if(value_path == "received")
    {
        received = value;
    }
    if(value_path == "redirect-received")
    {
        redirect_received = value;
    }
    if(value_path == "redirect-send")
    {
        redirect_send = value;
    }
    if(value_path == "router-advert-received")
    {
        router_advert_received = value;
    }
    if(value_path == "router-solicit-received")
    {
        router_solicit_received = value;
    }
    if(value_path == "source-quench-received")
    {
        source_quench_received = value;
    }
    if(value_path == "timestamp-received")
    {
        timestamp_received = value;
    }
    if(value_path == "timestamp-reply-received")
    {
        timestamp_reply_received = value;
    }
    if(value_path == "unknown")
    {
        unknown = value;
    }
}

Ipv4Network::Nodes::Node::Statistics::Traffic::Traffic()
    :
    icmp_stats(std::make_unique<Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats>())
	,ipv4_stats(std::make_unique<Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats>())
{
    icmp_stats->parent = this;
    children["icmp-stats"] = icmp_stats.get();

    ipv4_stats->parent = this;
    children["ipv4-stats"] = ipv4_stats.get();

    yang_name = "traffic"; yang_parent_name = "statistics";
}

Ipv4Network::Nodes::Node::Statistics::Traffic::~Traffic()
{
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::has_data() const
{
    return (icmp_stats !=  nullptr && icmp_stats->has_data())
	|| (ipv4_stats !=  nullptr && ipv4_stats->has_data());
}

bool Ipv4Network::Nodes::Node::Statistics::Traffic::has_operation() const
{
    return is_set(operation)
	|| (icmp_stats !=  nullptr && is_set(icmp_stats->operation))
	|| (ipv4_stats !=  nullptr && is_set(ipv4_stats->operation));
}

std::string Ipv4Network::Nodes::Node::Statistics::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::Statistics::Traffic::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::Statistics::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "icmp-stats")
    {
        if(icmp_stats != nullptr)
        {
            children["icmp-stats"] = icmp_stats.get();
        }
        else
        {
            icmp_stats = std::make_unique<Ipv4Network::Nodes::Node::Statistics::Traffic::IcmpStats>();
            icmp_stats->parent = this;
            children["icmp-stats"] = icmp_stats.get();
        }
        return children.at("icmp-stats");
    }

    if(child_yang_name == "ipv4-stats")
    {
        if(ipv4_stats != nullptr)
        {
            children["ipv4-stats"] = ipv4_stats.get();
        }
        else
        {
            ipv4_stats = std::make_unique<Ipv4Network::Nodes::Node::Statistics::Traffic::Ipv4Stats>();
            ipv4_stats->parent = this;
            children["ipv4-stats"] = ipv4_stats.get();
        }
        return children.at("ipv4-stats");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::Statistics::Traffic::get_children()
{
    if(children.find("icmp-stats") == children.end())
    {
        if(icmp_stats != nullptr)
        {
            children["icmp-stats"] = icmp_stats.get();
        }
    }

    if(children.find("ipv4-stats") == children.end())
    {
        if(ipv4_stats != nullptr)
        {
            children["ipv4-stats"] = ipv4_stats.get();
        }
    }

    return children;
}

void Ipv4Network::Nodes::Node::Statistics::Traffic::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::Statistics::Statistics()
    :
    traffic(std::make_unique<Ipv4Network::Nodes::Node::Statistics::Traffic>())
{
    traffic->parent = this;
    children["traffic"] = traffic.get();

    yang_name = "statistics"; yang_parent_name = "node";
}

Ipv4Network::Nodes::Node::Statistics::~Statistics()
{
}

bool Ipv4Network::Nodes::Node::Statistics::has_data() const
{
    return (traffic !=  nullptr && traffic->has_data());
}

bool Ipv4Network::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (traffic !=  nullptr && is_set(traffic->operation));
}

std::string Ipv4Network::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
        else
        {
            traffic = std::make_unique<Ipv4Network::Nodes::Node::Statistics::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic.get();
        }
        return children.at("traffic");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::Statistics::get_children()
{
    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic.get();
        }
    }

    return children;
}

void Ipv4Network::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    interface_data(std::make_unique<Ipv4Network::Nodes::Node::InterfaceData>())
	,statistics(std::make_unique<Ipv4Network::Nodes::Node::Statistics>())
{
    interface_data->parent = this;
    children["interface-data"] = interface_data.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Ipv4Network::Nodes::Node::~Node()
{
}

bool Ipv4Network::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (interface_data !=  nullptr && interface_data->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Ipv4Network::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (interface_data !=  nullptr && is_set(interface_data->operation))
	|| (statistics !=  nullptr && is_set(statistics->operation));
}

std::string Ipv4Network::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/nodes/" << get_segment_path();
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

Entity* Ipv4Network::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            interface_data = std::make_unique<Ipv4Network::Nodes::Node::InterfaceData>();
            interface_data->parent = this;
            children["interface-data"] = interface_data.get();
        }
        return children.at("interface-data");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<Ipv4Network::Nodes::Node::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::Node::get_children()
{
    if(children.find("interface-data") == children.end())
    {
        if(interface_data != nullptr)
        {
            children["interface-data"] = interface_data.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void Ipv4Network::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Ipv4Network::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ipv4-network";
}

Ipv4Network::Nodes::~Nodes()
{
}

bool Ipv4Network::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Ipv4Network::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Network::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Nodes::get_children()
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

void Ipv4Network::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::Acl()
    :
    	common_in_bound{YType::str, "common-in-bound"},
	 common_out_bound{YType::str, "common-out-bound"},
	 inbound{YType::str, "inbound"},
	 outbound{YType::str, "outbound"}
{
    yang_name = "acl"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::~Acl()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::has_data() const
{
    return common_in_bound.is_set
	|| common_out_bound.is_set
	|| inbound.is_set
	|| outbound.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::has_operation() const
{
    return is_set(operation)
	|| is_set(common_in_bound.operation)
	|| is_set(common_out_bound.operation)
	|| is_set(inbound.operation)
	|| is_set(outbound.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_entity_path(Entity* ancestor) const
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
    if (inbound.is_set || is_set(inbound.operation)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.operation)) leaf_name_data.push_back(outbound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "common-in-bound")
    {
        common_in_bound = value;
    }
    if(value_path == "common-out-bound")
    {
        common_out_bound = value;
    }
    if(value_path == "inbound")
    {
        inbound = value;
    }
    if(value_path == "outbound")
    {
        outbound = value;
    }
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::MultiAcl()
    :
    	common{YType::str, "common"},
	 inbound{YType::str, "inbound"},
	 outbound{YType::str, "outbound"}
{
    yang_name = "multi-acl"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::~MultiAcl()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::has_data() const
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

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::has_operation() const
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

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-acl";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::HelperAddress()
    :
    	address_array{YType::str, "address-array"}
{
    yang_name = "helper-address"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::~HelperAddress()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::has_data() const
{
    for (auto const & leaf : address_array.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::has_operation() const
{
    for (auto const & leaf : address_array.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_entity_path(Entity* ancestor) const
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


    auto address_array_name_datas = address_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_array_name_datas.begin(), address_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-array")
    {
        address_array.append(value);
    }
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::Rpf()
    :
    	allow_default_route{YType::boolean, "allow-default-route"},
	 allow_self_ping{YType::boolean, "allow-self-ping"},
	 enable{YType::boolean, "enable"},
	 mode{YType::enumeration, "mode"}
{
    yang_name = "rpf"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::~Rpf()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::has_data() const
{
    return allow_default_route.is_set
	|| allow_self_ping.is_set
	|| enable.is_set
	|| mode.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default_route.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(enable.operation)
	|| is_set(mode.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::Input()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::boolean, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "input"; yang_parent_name = "bgp-pa";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::~Input()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::Output()
    :
    	destination{YType::boolean, "destination"},
	 enable{YType::boolean, "enable"},
	 source{YType::boolean, "source"}
{
    yang_name = "output"; yang_parent_name = "bgp-pa";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::~Output()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::has_data() const
{
    return destination.is_set
	|| enable.is_set
	|| source.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(destination.operation)
	|| is_set(enable.operation)
	|| is_set(source.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output::set_value(const std::string & value_path, std::string value)
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

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::BgpPa()
    :
    input(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input>())
	,output(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output>())
{
    input->parent = this;
    children["input"] = input.get();

    output->parent = this;
    children["output"] = output.get();

    yang_name = "bgp-pa"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::~BgpPa()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && is_set(input->operation))
	|| (output !=  nullptr && is_set(output->operation));
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pa";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            input = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Input>();
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
            output = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::Output>();
            output->parent = this;
            children["output"] = output.get();
        }
        return children.at("output");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::get_children()
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

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::PubUtime()
{
    yang_name = "pub-utime"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::~PubUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pub-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::IdbUtime()
{
    yang_name = "idb-utime"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::~IdbUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idb-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::CapsUtime()
{
    yang_name = "caps-utime"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::~CapsUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caps-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::FwdEnUtime()
{
    yang_name = "fwd-en-utime"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::~FwdEnUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-en-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::FwdDisUtime()
{
    yang_name = "fwd-dis-utime"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::~FwdDisUtime()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::has_data() const
{
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::has_operation() const
{
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fwd-dis-utime";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::MulticastGroup()
    :
    	group_address{YType::str, "group-address"}
{
    yang_name = "multicast-group"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::~MulticastGroup()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::has_data() const
{
    return group_address.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-group";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_entity_path(Entity* ancestor) const
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

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::SecondaryAddress()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint32, "prefix-length"},
	 route_tag{YType::uint32, "route-tag"}
{
    yang_name = "secondary-address"; yang_parent_name = "detail";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::~SecondaryAddress()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| route_tag.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation)
	|| is_set(route_tag.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-address";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_entity_path(Entity* ancestor) const
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
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
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

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Detail()
    :
    	direct_broadcast{YType::boolean, "direct-broadcast"},
	 flow_tag_dst{YType::boolean, "flow-tag-dst"},
	 flow_tag_src{YType::boolean, "flow-tag-src"},
	 line_state{YType::enumeration, "line-state"},
	 mask_reply{YType::boolean, "mask-reply"},
	 mlacp_active{YType::boolean, "mlacp-active"},
	 mtu{YType::uint32, "mtu"},
	 prefix_length{YType::uint32, "prefix-length"},
	 primary_address{YType::str, "primary-address"},
	 proxy_arp_disabled{YType::boolean, "proxy-arp-disabled"},
	 redirect{YType::boolean, "redirect"},
	 rg_id_exists{YType::boolean, "rg-id-exists"},
	 route_tag{YType::uint32, "route-tag"},
	 unnumbered_interface_name{YType::str, "unnumbered-interface-name"},
	 unreachable{YType::boolean, "unreachable"},
	 vrf_id{YType::uint32, "vrf-id"}
    	,
    acl(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl>())
	,bgp_pa(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa>())
	,caps_utime(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime>())
	,fwd_dis_utime(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime>())
	,fwd_en_utime(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime>())
	,helper_address(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress>())
	,idb_utime(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime>())
	,multi_acl(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl>())
	,pub_utime(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime>())
	,rpf(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf>())
{
    acl->parent = this;
    children["acl"] = acl.get();

    bgp_pa->parent = this;
    children["bgp-pa"] = bgp_pa.get();

    caps_utime->parent = this;
    children["caps-utime"] = caps_utime.get();

    fwd_dis_utime->parent = this;
    children["fwd-dis-utime"] = fwd_dis_utime.get();

    fwd_en_utime->parent = this;
    children["fwd-en-utime"] = fwd_en_utime.get();

    helper_address->parent = this;
    children["helper-address"] = helper_address.get();

    idb_utime->parent = this;
    children["idb-utime"] = idb_utime.get();

    multi_acl->parent = this;
    children["multi-acl"] = multi_acl.get();

    pub_utime->parent = this;
    children["pub-utime"] = pub_utime.get();

    rpf->parent = this;
    children["rpf"] = rpf.get();

    yang_name = "detail"; yang_parent_name = "vrf";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::~Detail()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::has_data() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_data())
            return true;
    }
    return direct_broadcast.is_set
	|| flow_tag_dst.is_set
	|| flow_tag_src.is_set
	|| line_state.is_set
	|| mask_reply.is_set
	|| mlacp_active.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| primary_address.is_set
	|| proxy_arp_disabled.is_set
	|| redirect.is_set
	|| rg_id_exists.is_set
	|| route_tag.is_set
	|| unnumbered_interface_name.is_set
	|| unreachable.is_set
	|| vrf_id.is_set
	|| (acl !=  nullptr && acl->has_data())
	|| (bgp_pa !=  nullptr && bgp_pa->has_data())
	|| (caps_utime !=  nullptr && caps_utime->has_data())
	|| (fwd_dis_utime !=  nullptr && fwd_dis_utime->has_data())
	|| (fwd_en_utime !=  nullptr && fwd_en_utime->has_data())
	|| (helper_address !=  nullptr && helper_address->has_data())
	|| (idb_utime !=  nullptr && idb_utime->has_data())
	|| (multi_acl !=  nullptr && multi_acl->has_data())
	|| (pub_utime !=  nullptr && pub_utime->has_data())
	|| (rpf !=  nullptr && rpf->has_data());
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::has_operation() const
{
    for (std::size_t index=0; index<multicast_group.size(); index++)
    {
        if(multicast_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<secondary_address.size(); index++)
    {
        if(secondary_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(direct_broadcast.operation)
	|| is_set(flow_tag_dst.operation)
	|| is_set(flow_tag_src.operation)
	|| is_set(line_state.operation)
	|| is_set(mask_reply.operation)
	|| is_set(mlacp_active.operation)
	|| is_set(mtu.operation)
	|| is_set(prefix_length.operation)
	|| is_set(primary_address.operation)
	|| is_set(proxy_arp_disabled.operation)
	|| is_set(redirect.operation)
	|| is_set(rg_id_exists.operation)
	|| is_set(route_tag.operation)
	|| is_set(unnumbered_interface_name.operation)
	|| is_set(unreachable.operation)
	|| is_set(vrf_id.operation)
	|| (acl !=  nullptr && is_set(acl->operation))
	|| (bgp_pa !=  nullptr && is_set(bgp_pa->operation))
	|| (caps_utime !=  nullptr && is_set(caps_utime->operation))
	|| (fwd_dis_utime !=  nullptr && is_set(fwd_dis_utime->operation))
	|| (fwd_en_utime !=  nullptr && is_set(fwd_en_utime->operation))
	|| (helper_address !=  nullptr && is_set(helper_address->operation))
	|| (idb_utime !=  nullptr && is_set(idb_utime->operation))
	|| (multi_acl !=  nullptr && is_set(multi_acl->operation))
	|| (pub_utime !=  nullptr && is_set(pub_utime->operation))
	|| (rpf !=  nullptr && is_set(rpf->operation));
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_entity_path(Entity* ancestor) const
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

    if (direct_broadcast.is_set || is_set(direct_broadcast.operation)) leaf_name_data.push_back(direct_broadcast.get_name_leafdata());
    if (flow_tag_dst.is_set || is_set(flow_tag_dst.operation)) leaf_name_data.push_back(flow_tag_dst.get_name_leafdata());
    if (flow_tag_src.is_set || is_set(flow_tag_src.operation)) leaf_name_data.push_back(flow_tag_src.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (mask_reply.is_set || is_set(mask_reply.operation)) leaf_name_data.push_back(mask_reply.get_name_leafdata());
    if (mlacp_active.is_set || is_set(mlacp_active.operation)) leaf_name_data.push_back(mlacp_active.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.operation)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (proxy_arp_disabled.is_set || is_set(proxy_arp_disabled.operation)) leaf_name_data.push_back(proxy_arp_disabled.get_name_leafdata());
    if (redirect.is_set || is_set(redirect.operation)) leaf_name_data.push_back(redirect.get_name_leafdata());
    if (rg_id_exists.is_set || is_set(rg_id_exists.operation)) leaf_name_data.push_back(rg_id_exists.get_name_leafdata());
    if (route_tag.is_set || is_set(route_tag.operation)) leaf_name_data.push_back(route_tag.get_name_leafdata());
    if (unnumbered_interface_name.is_set || is_set(unnumbered_interface_name.operation)) leaf_name_data.push_back(unnumbered_interface_name.get_name_leafdata());
    if (unreachable.is_set || is_set(unreachable.operation)) leaf_name_data.push_back(unreachable.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "acl")
    {
        if(acl != nullptr)
        {
            children["acl"] = acl.get();
        }
        else
        {
            acl = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Acl>();
            acl->parent = this;
            children["acl"] = acl.get();
        }
        return children.at("acl");
    }

    if(child_yang_name == "bgp-pa")
    {
        if(bgp_pa != nullptr)
        {
            children["bgp-pa"] = bgp_pa.get();
        }
        else
        {
            bgp_pa = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::BgpPa>();
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
            caps_utime = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::CapsUtime>();
            caps_utime->parent = this;
            children["caps-utime"] = caps_utime.get();
        }
        return children.at("caps-utime");
    }

    if(child_yang_name == "fwd-dis-utime")
    {
        if(fwd_dis_utime != nullptr)
        {
            children["fwd-dis-utime"] = fwd_dis_utime.get();
        }
        else
        {
            fwd_dis_utime = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdDisUtime>();
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
            fwd_en_utime = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::FwdEnUtime>();
            fwd_en_utime->parent = this;
            children["fwd-en-utime"] = fwd_en_utime.get();
        }
        return children.at("fwd-en-utime");
    }

    if(child_yang_name == "helper-address")
    {
        if(helper_address != nullptr)
        {
            children["helper-address"] = helper_address.get();
        }
        else
        {
            helper_address = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::HelperAddress>();
            helper_address->parent = this;
            children["helper-address"] = helper_address.get();
        }
        return children.at("helper-address");
    }

    if(child_yang_name == "idb-utime")
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
        else
        {
            idb_utime = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::IdbUtime>();
            idb_utime->parent = this;
            children["idb-utime"] = idb_utime.get();
        }
        return children.at("idb-utime");
    }

    if(child_yang_name == "multi-acl")
    {
        if(multi_acl != nullptr)
        {
            children["multi-acl"] = multi_acl.get();
        }
        else
        {
            multi_acl = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MultiAcl>();
            multi_acl->parent = this;
            children["multi-acl"] = multi_acl.get();
        }
        return children.at("multi-acl");
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
        auto c = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::MulticastGroup>();
        c->parent = this;
        multicast_group.push_back(std::move(c));
        children[segment_path] = multicast_group.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "pub-utime")
    {
        if(pub_utime != nullptr)
        {
            children["pub-utime"] = pub_utime.get();
        }
        else
        {
            pub_utime = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::PubUtime>();
            pub_utime->parent = this;
            children["pub-utime"] = pub_utime.get();
        }
        return children.at("pub-utime");
    }

    if(child_yang_name == "rpf")
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
        else
        {
            rpf = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::Rpf>();
            rpf->parent = this;
            children["rpf"] = rpf.get();
        }
        return children.at("rpf");
    }

    if(child_yang_name == "secondary-address")
    {
        for(auto const & c : secondary_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::SecondaryAddress>();
        c->parent = this;
        secondary_address.push_back(std::move(c));
        children[segment_path] = secondary_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::get_children()
{
    if(children.find("acl") == children.end())
    {
        if(acl != nullptr)
        {
            children["acl"] = acl.get();
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

    if(children.find("helper-address") == children.end())
    {
        if(helper_address != nullptr)
        {
            children["helper-address"] = helper_address.get();
        }
    }

    if(children.find("idb-utime") == children.end())
    {
        if(idb_utime != nullptr)
        {
            children["idb-utime"] = idb_utime.get();
        }
    }

    if(children.find("multi-acl") == children.end())
    {
        if(multi_acl != nullptr)
        {
            children["multi-acl"] = multi_acl.get();
        }
    }

    for (auto const & c : multicast_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("pub-utime") == children.end())
    {
        if(pub_utime != nullptr)
        {
            children["pub-utime"] = pub_utime.get();
        }
    }

    if(children.find("rpf") == children.end())
    {
        if(rpf != nullptr)
        {
            children["rpf"] = rpf.get();
        }
    }

    for (auto const & c : secondary_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direct-broadcast")
    {
        direct_broadcast = value;
    }
    if(value_path == "flow-tag-dst")
    {
        flow_tag_dst = value;
    }
    if(value_path == "flow-tag-src")
    {
        flow_tag_src = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "mask-reply")
    {
        mask_reply = value;
    }
    if(value_path == "mlacp-active")
    {
        mlacp_active = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
    }
    if(value_path == "proxy-arp-disabled")
    {
        proxy_arp_disabled = value;
    }
    if(value_path == "redirect")
    {
        redirect = value;
    }
    if(value_path == "rg-id-exists")
    {
        rg_id_exists = value;
    }
    if(value_path == "route-tag")
    {
        route_tag = value;
    }
    if(value_path == "unnumbered-interface-name")
    {
        unnumbered_interface_name = value;
    }
    if(value_path == "unreachable")
    {
        unreachable = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::Brief()
    :
    	line_state{YType::enumeration, "line-state"},
	 primary_address{YType::str, "primary-address"},
	 vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "brief"; yang_parent_name = "vrf";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::~Brief()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::has_data() const
{
    return line_state.is_set
	|| primary_address.is_set
	|| vrf_id.is_set;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::has_operation() const
{
    return is_set(operation)
	|| is_set(line_state.operation)
	|| is_set(primary_address.operation)
	|| is_set(vrf_id.operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_entity_path(Entity* ancestor) const
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

    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (primary_address.is_set || is_set(primary_address.operation)) leaf_name_data.push_back(primary_address.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::get_children()
{
    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "primary-address")
    {
        primary_address = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Vrf()
    :
    	vrf_name{YType::str, "vrf-name"}
    	,
    brief(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief>())
	,detail(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail>())
{
    brief->parent = this;
    children["brief"] = brief.get();

    detail->parent = this;
    children["detail"] = detail.get();

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrf::~Vrf()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (brief !=  nullptr && brief->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Ipv4Network::Interfaces::Interface::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (brief !=  nullptr && is_set(brief->operation))
	|| (detail !=  nullptr && is_set(detail->operation));
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
        else
        {
            brief = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Brief>();
            brief->parent = this;
            children["brief"] = brief.get();
        }
        return children.at("brief");
    }

    if(child_yang_name == "detail")
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
        else
        {
            detail = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf::Detail>();
            detail->parent = this;
            children["detail"] = detail.get();
        }
        return children.at("detail");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::Vrf::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief.get();
        }
    }

    if(children.find("detail") == children.end())
    {
        if(detail != nullptr)
        {
            children["detail"] = detail.get();
        }
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Ipv4Network::Interfaces::Interface::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "interface";
}

Ipv4Network::Interfaces::Interface::Vrfs::~Vrfs()
{
}

bool Ipv4Network::Interfaces::Interface::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::Interface::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::Interface::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::Vrfs::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::Interfaces::Interface::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::Vrfs::get_children()
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

void Ipv4Network::Interfaces::Interface::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    vrfs(std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv4Network::Interfaces::Interface::~Interface()
{
}

bool Ipv4Network::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Ipv4Network::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (vrfs !=  nullptr && is_set(vrfs->operation));
}

std::string Ipv4Network::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/Cisco-IOS-XR-ipv4-ma-oper:interfaces/" << get_segment_path();
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

Entity* Ipv4Network::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
        else
        {
            vrfs = std::make_unique<Ipv4Network::Interfaces::Interface::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs.get();
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Interfaces::Interface::get_children()
{
    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs.get();
        }
    }

    return children;
}

void Ipv4Network::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ipv4Network::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4-network";
}

Ipv4Network::Interfaces::~Interfaces()
{
}

bool Ipv4Network::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv4Network::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv4Network::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-ma-oper:interfaces";

    return path_buffer.str();

}

EntityPath Ipv4Network::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv4Network::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv4Network::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::Interfaces::get_children()
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

void Ipv4Network::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv4Network::Ipv4Network()
    :
    interfaces(std::make_unique<Ipv4Network::Interfaces>())
	,nodes(std::make_unique<Ipv4Network::Nodes>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "ipv4-network"; yang_parent_name = "Cisco-IOS-XR-ipv4-io-oper";
}

Ipv4Network::~Ipv4Network()
{
}

bool Ipv4Network::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool Ipv4Network::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Ipv4Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-io-oper:ipv4-network";

    return path_buffer.str();

}

EntityPath Ipv4Network::get_entity_path(Entity* ancestor) const
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

Entity* Ipv4Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Ipv4Network::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Ipv4Network::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv4Network::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Ipv4Network::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ipv4Network::clone_ptr()
{
    return std::make_unique<Ipv4Network>();
}

const Enum::Value RpfModeEnum::strict {0, "strict"};
const Enum::Value RpfModeEnum::loose {1, "loose"};

const Enum::Value Ipv4MaOperLineStateEnum::unknown {0, "unknown"};
const Enum::Value Ipv4MaOperLineStateEnum::shutdown {1, "shutdown"};
const Enum::Value Ipv4MaOperLineStateEnum::down {2, "down"};
const Enum::Value Ipv4MaOperLineStateEnum::up {3, "up"};


}
}

